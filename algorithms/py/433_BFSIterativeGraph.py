"""
433. Minimum Genetic Mutation
A gene string can be represented by an 8-character long string, with choices from 'A', 'C', 'G', and 'T'.
Suppose we need to investigate a mutation from a gene string startGene to a gene string endGene where one mutation is defined as one single character changed in the gene string.
For example, "AACCGGTT" --> "AACCGGTA" is one mutation.
There is also a gene bank bank that records all the valid gene mutations. A gene must be in bank to make it a valid gene string.
Given the two gene strings startGene and endGene and the gene bank bank, return the minimum number of mutations needed to mutate from startGene to endGene.
If there is no such a mutation, return -1.
Note that the starting point is assumed to be valid, so it might not be included in the bank.

Example 1:
Input: startGene = "AACCGGTT", endGene = "AACCGGTA", bank = ["AACCGGTA"]
Output: 1

Example 2:
Input: startGene = "AACCGGTT", endGene = "AAACGGTA", bank = ["AACCGGTA","AACCGCTA","AAACGGTA"]
Output: 2

Constraints:
0 <= bank.length <= 10
startGene.length == endGene.length == bank[i].length == 8
startGene, endGene, and bank[i] consist of only the characters ['A', 'C', 'G', 'T'].
"""


class Solution:
    # Check if two genes differ by exactly one character
    def isValidMutation(self, gene1: str, gene2: str) -> bool:
        difference = 0
        for i in range(len(gene1)):
            if gene1[i] != gene2[i]:
                difference += 1

            if difference > 1:
                return False

        return True

    # Create undirected graph where edges connect valid one-step mutations
    def generateGraph(self, geneList: List[str]) -> Dict[str, Set[str]]:
        mutationGraph = {sourceGene: set() for sourceGene in geneList}

        for sourceGene in geneList:
            for targetGene in geneList:
                if sourceGene != targetGene and self.isValidMutation(
                    sourceGene, targetGene
                ):
                    mutationGraph[sourceGene].add(targetGene)

        return mutationGraph

    def minMutation(self, startGene: str, endGene: str, bank: List[str]) -> int:
        # Edge case: endGame not in bank, cannot reach
        if endGene not in bank:
            return -1

        mutationGraph = self.generateGraph([startGene] + bank)
        visitedGenes = set()

        queue = deque([startGene])
        mutationSteps = 0

        while queue:
            levelSize = len(queue)

            for _ in range(levelSize):
                currentGene = queue.popleft()

                if currentGene == endGene:
                    return mutationSteps

                # Explore unvisited neighbors
                for neighborGene in mutationGraph.get(currentGene, []):
                    if neighborGene not in visitedGenes:
                        visitedGenes.add(neighborGene)
                        queue.append(neighborGene)

            mutationSteps += 1

        return -1
