"""
1926. Nearest Exit from Entrance in Maze
You are given an m x n matrix maze (0-indexed) with empty cells (represented as '.') and walls (represented as '+').
You are also given the entrance of the maze, where entrance = [entrancerow, entrancecol] denotes the row and column of the cell you are initially standing at.
In one step, you can move one cell up, down, left, or right. You cannot step into a cell with a wall, and you cannot step outside the maze. Your goal is to find the nearest exit from the entrance.
An exit is defined as an empty cell that is at the border of the maze. The entrance does not count as an exit.
Return the number of steps in the shortest path from the entrance to the nearest exit, or -1 if no such path exists.

Example 1:
Input: maze = [["+","+",".","+"],[".",".",".","+"],["+","+","+","."]], entrance = [1,2]
Output: 1
Explanation: There are 3 exits in this maze at [1,0], [0,2], and [2,3].
Initially, you are at the entrance cell [1,2].
- You can reach [1,0] by moving 2 steps left.
- You can reach [0,2] by moving 1 step up.
It is impossible to reach [2,3] from the entrance.
Thus, the nearest exit is [0,2], which is 1 step away.

Example 2:
Input: maze = [["+","+","+"],[".",".","."],["+","+","+"]], entrance = [1,0]
Output: 2
Explanation: There is 1 exit in this maze at [1,2].
[1,0] does not count as an exit since it is the entrance cell.
Initially, you are at the entrance cell [1,0].
- You can reach [1,2] by moving 2 steps right.
Thus, the nearest exit is [1,2], which is 2 steps away.

Example 3:
Input: maze = [[".","+"]], entrance = [0,0]
Output: -1
Explanation: There are no exits in this maze.
"""


class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int:
        visited = set()
        directions = ([0, 1], [0, -1], [1, 0], [-1, 0])
        m, n = len(maze), len(maze[0])
        queue = deque([(0, tuple(entrance))])
        visited.add(tuple(entrance))

        while queue:
            steps, (r, c) = queue.popleft()

            if (r == 0 or r == m - 1 or c == 0 or c == n - 1) and (r, c) != tuple(
                entrance
            ):
                return steps

            for dr, dc in directions:
                nr, nc = r + dr, c + dc

                if nr < 0 or nc < 0 or nr >= m or nc >= n:
                    continue
                if (nr, nc) in visited:
                    continue
                if maze[nr][nc] == "+":
                    continue

                visited.add((nr, nc))
                queue.append((steps + 1, (nr, nc)))
        return -1
