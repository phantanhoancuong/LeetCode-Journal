Author: Cuong Phan
### LeetCode Journal

| No. | Name    | Difficulty | Solution              |Notes|Time Complexity|Space Complexity|
| --- | ------- | ---------- | --------------------- |----|---|-|
| 1  | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy       | [C#](./algorithms/cs/1_HashMap.cs) | C#: Use a hashmap to look up values at constant time.|C#: $O(n)$|C#: $O(n)$|
| 2  | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | Medium       | [C#](./algorithms/cs/2_LinkedLists.cs) | C#: Remember to check if the last addition requires a carry node|C#: $O(max(m, n))$|C#: $O(max(m, n))$|
| 3  | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium       | [C#](./algorithms/cs/3_SlidingWindow.cs) | C#: Use a hashmap to to store the last visited index of a character.|C#: $O(n)$|C#: $O(min(m, n))$|
| 4  | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Hard      | [C#_Iterative](./algorithms/cs/4_Iterative.cs) | C# Iterative: Use two pointers to traverse the arrays until you encounter the medians.|C# Iterative: $O(m + n)$|C# Iterative: $O(1)$|
| 5  | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) | Medium     | [C#](./algorithms/cs/5_CenterExpansion.cs) | C#: Use two pointers 'left' and 'right' of the substring with the ith element as its center and keep expanding by the sides as long as the string is palindromic. Remember to check the both odd and even lengths.|C#: $O(n^{2})$|C#: $O(1)$|
| 6  | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | Medium    | [C#](./algorithms/cs/6_Iterative.cs) | C#: Create an array of StringBuilder corresponding to the rows, iteratively append the characters into the StringBuilder array.|C#: $O(n)$|C#: $O(n)$|
| 7  | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | Medium    | [C#](./algorithms/cs/7_Iterative.cs) | C#: Check if underflows or overflows before adding the tail end digit to the result int iteratively using modulus.|C#: $O(log(n))$|C#: $O(1)$|
| 8  | [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | Medium    | [C#](./algorithms/cs/8_Iterative.cs) | C#: Skip leading whitespaces, check for sign, subtract ASCII '0' to get value, check if underflows or overflows. |C#: $O(n)$|C#: $O(1)$|
| 9  | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | Medium    | [C#](./algorithms/cs/9_MidReverse.cs) | C#: False if negative or divisible by 10 (excluding 0), reverse till middle, check if reversed = original (odd-length number) or reversed / 10 = original (even-length number). |C#: $O(log(n))$|C#: $O(1)$|
| 11  | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | Medium    | [C#](./algorithms/cs/11_TwoPointers.cs)<br><br>[C++](./algorithms/cpp/11_TwoPointers.cpp) | C#: Use two pointers at the start and end of array, contract the container by the lower wall's side.<br><br>C++: Use two pointers at the start and end of array, contract the container by the lower wall's side. |C#: $O(n)$<br><br>C++: $O(n)$|C#: $O(1)$<br><br>C++: $O(1)$|
| 13  | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | Easy    | [C++](./algorithms/cpp/13_Iterative.cpp) | C++: If the next numeral is larger then subtract the current one, else add it. |C++: $O(n)$|C++: $O(1)$|
| 15  | [3Sum](https://leetcode.com/problems/3sum/) | Medium    | [C++](./algorithms/cpp/15_TwoPointers.cpp) | C++: Sort the array, iterate through the array as "fixed value" then use two pointers on the subarray on the right to find the triplets. |C++: $O(n^2)$|C++: $O(1)$|
| 16  | [3Sum Closest](https://leetcode.com/problems/3sum-closest/) | Medium    | [C++](./algorithms/cpp/16_TwoPointers.cpp) | C++: Sort the array, iterate through the array as "fixed value" then use two pointers on the subarray on the right to find the triplet. |C++: $O(n^2)$|C++: $O(1)$|
| 17  | [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | Medium    | [C++](./algorithms/cpp/17_Recursive.cpp) | C++: Use a recursive backtrack method. Base case if when the currentString is the same length as digits |C++: $O(3^N*4^M)$, N is the number of digits in the input string that map to 3 letters and M is the number of digits that map to 4 letters.|C++: $O(3^N*4^M)$|
| 20  | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy    | [C++_StackMap](./algorithms/cpp/20_StackMap.cpp)<br><br>[C++_StackNoMap](./algorithms/cpp/20_StackNoMap.cpp) | C++_StackMap: Use a stack to keep track of the latest added opening parenthesis and a map to map opening parentheses to their closing counterparts.<br><br>C++_StackNoMap: Using conditions instead of a map may improve speed and lower space because there are only three parenthesis types in exchange for readability and scalability. |C++_StackMap: $O(N)$.<br><br>C++_StackNoMap: $O(N)$.|C++_StackMap $O(N)$<br><br>C++_StackNoMap: $O(N)$.|
| 22  | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | Medium    | [C++](./algorithms/cpp/22_Recursion.cpp) | C++: Use recursion and 2 integers to keep track of how many opening and closing parentheses there are in the strings. |C++: $O(2^N)$.|C++: $O(N)$|
| 27  | [Remove Element](https://leetcode.com/problems/remove-element/) | Easy    | [C++](./algorithms/cpp/27_TwoPointers.cpp) | C++: Use two pointers to find target values in the left and non-target values in the right to swap. |C++: $O(N)$.|C++: $O(1)$|
| 28  | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | Easy    | [C++](./algorithms/cpp/28_Iterative.cpp) | C++_Iterative: Use an iterative approach (you can use substr instead of another loop but it is less memory-efficient). |C++_Iterative: $O(N * M)$.|C++: $O(1)$|
| 35  | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Easy    | [C++](./algorithms/cpp/35_BinarySearch.cpp) | C++: Binary search approach, remember to update the left and right pointers PAST the middle pointer. |C++: $O(log(n))$|C++: $O(1)$|
| 38  | [Count and Say](https://leetcode.com/problems/count-and-say/) | Medium    | [C++](./algorithms/cpp/38_Iterative.cpp) | C++: Iterative approach|C++: $O(n)$|C++: $O(2^n)$|
| 39  | [Combination Sum](https://leetcode.com/problems/combination-sum/) | Medium    | [C++](./algorithms/cpp/39_Backtrack.cpp) | C++: Recursive backtrack approach (remember to run j from i to avoid duplicate result as well as pass by reference to increase performance). |C++: $O(2^n)$|C++: $O(2^n)$|
| 55  | [Jump Game](https://leetcode.com/problems/jump-game/) | Medium    | [C++](./algorithms/cpp/55_Greedy.cpp) | C++: Use greedy algorithm, iterate through the vector, if current index is larger than max reach then return false else update max reach. |C++: $O(n)$|C++: $O(1)$|
| 58  | [Length of Last Word](https://leetcode.com/problems/length-of-last-word/) | Easy    | [C++](./algorithms/cpp/58_Iterative.cpp) | C++: Iterative approach, iterate from the back with 2 while loops (not nested). |C++: $O(n)$|C++: $O(1)$|
| 66  | [Plus One](https://leetcode.com/problems/plus-one/) | Easy    | [C++](./algorithms/cpp/66_Iterative.cpp) | C++: Don't try to add too many conditions in the loop. |C++: $O(n)$|C++: $O(1)$|
| 75  | [Sort Colors](https://leetcode.com/problems/sort-colors/) | Medium    | [C++](./algorithms/cpp/75_ThreePointers.cpp) | C++: Use the Dutch National Flag (3-way partition algorithm). |C++: $O(n)$|C++: $O(1)$|
| 104  | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy    | [C++](./algorithms/cpp/104_Recursive.cpp) | C++: Use recursive depth-first traversal of the tree (check if the currentNode is nullptr before incrementing the count). |C++: $O(n)$|C++: $O(h) with h being the height of the tree.$|
| 112  | [Path Sum](https://leetcode.com/problems/path-sum/) | Easy    | [C++](./algorithms/cpp/112_Iterative.cpp) | C++: Use recursive depth-first traversal of the tree. |C++: $O(n)$|C++: $O(h) with h being the height of the tree.$|
| 118  | [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) | Easy    | [C++](./algorithms/cpp/118_Combinatorial.cpp) | C++: Initialize each row with values of 1, adjust the middle values with combinatorial formula. |C++: $O(n^2)$|C++: $O(n^2)$|
| 119  | [Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii/) | Easy    | [C++_TwoRows](./algorithms/cpp/119_TwoRows.cpp)<br><br>[C++_OneRow](./algorithms/cpp/119_OneRow.cpp) | C++_TwoRows: Make base rows - vector<int> prevRow(1, 1) and use two vectors to store the current row and the previous row for calculation. <br><br>C++_OneRow: Use a single row with size rowIndex + 1, calculate the middle values backwards (row[j] += row[j - 1]).|C++_TwoRows: $O(n^2)$<br><br>C++_OneRow: $O(n^2)|C++_TwoRows: $O(n)$<br><br>C++_OneRow: $O(n)$|
| 121  | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy    | [C++](./algorithms/cpp/121_Iterative.cpp) | C++: Update minBuy and maxProfit separately. |C++: $O(n)$|C++: $O(1)$|
| 122  | [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | Medium    | [C++](./algorithms/cpp/122_Iterative.cpp) | C++: If price is lower, update minBuy if not sell constantly. |C++: $O(n)$|C++: $O(1)$|
| 125  | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | Easy    | [C++](./algorithms/cpp/125_TwoPointers.cpp) | C++: Two pointers. |C++: $O(n)$|C++: $O(1)$|
| 136  | [Single Number](https://leetcode.com/problems/single-number/) | Easy    | [C++](./algorithms/cpp/136_XOR.cpp) | C++: XOR each element of the array (if an element appears twice, XOR would be 0 which means XOR product of the entire array is the element that only appears once) and order and position do not matter in XOR. |C++: $O(n)$|C++: $O(1)$|
| 167  | [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Medium    | [C++](./algorithms/cpp/167_TwoPointers.cpp) | C++: Use two pointers and increment or decrement them so that the sum creep towards the target. |C++: $O(n)$|C++: $O(1)$|
| 202  | [Happy Number](https://leetcode.com/problems/happy-number/) | Easy    | [C++_UnorderedSet](./algorithms/cpp/202_UnorderedSet.cpp) | C++_UnorderedSet: Use unordered set to keep track of what sum has been seen to detect cycle.|C++_UnorderedSet: $O(log(n))$ |C++_UnorderedSet: $O(log(n))$|
| 232  | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | Easy    | [C++](./algorithms/cpp/232_TwoStacks.cpp) | C++: Use two stacks. |C++: N/A |C++: N/A |
| 283  | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | Easy    | [C++_Swap](./algorithms/cpp/283_Swap.cpp) | C++_Swap: Iterate through the list, use a pointer to keep track of where the last non-zero element ahead of the current element to swap if the current element is 0.|C++_Swap: $O(n)$ |C++_TwoRows: $O(1)$|
| 338  | [Counting Bits](https://leetcode.com/problems/counting-bits/) | Easy    | [C++](./algorithms/cpp/338_Tabulation.cpp) | C++: Bottom-up DP approach. |C++: $O(n)$|C++: $O(1)$|
| 345  | [Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/) | Easy    | [C++](./algorithms/cpp/345_TwoPointers.cpp) | C++: Two pointers approach. |C++: $O(n)$|C++: $O(1)$|
| 374  | [Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/) | Easy    | [C++](./algorithms/cpp/374_BinarySearch.cpp) | C++: Binary search approach. |C++: $O(log(n))$|C++: $O(1)$|
| 383  | [Ramsom Note](https://leetcode.com/problems/ransom-note/) | Easy    | [C++](./algorithms/cpp/383_UnorderedMap.cpp) | C++: Build a map from the magazine then iterate and decrement map value by character's appearance in the ransom note. |C++: $O(m + n)$|C++: $O(m)$|
| 392  | [Is Subsequence](https://leetcode.com/problems/is-subsequence/) | Easy    | [C++](./algorithms/cpp/392_Iterative.cpp) | C++: Iterative approach. |C++: $O(n)$|C++: $O(1)$|
| 605  | [Can Place Flowers](https://leetcode.com/problems/can-place-flowers/) | Easy    | [C++](./algorithms/cpp/605_Iterative.cpp) | C++: Iterative approach, can also skip the next 1 or 2 elements if the current or the next element is occupied. |C++: $O(n)$|C++: $O(1)$|
| 643  | [Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray=i/) | Easy    | [C++](./algorithms/cpp/643_Iterative.cpp) | C++: Iterative approach, just look for the maximum sum then do the averaging later, remember to do typecasting at the end to get the right result. |C++: $O(n)$|C++: $O(1)$|
| 700  | [Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/) | Easy    | [C++](./algorithms/cpp/700_Recursive.cpp) | C++: Recursive approach. |C++: $O(log(n))$|C++: $O(1)$|
| 724  | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | Easy    | [C++](./algorithms/cpp/724_Iterative.cpp) | C++: Iterative approach. |C++: $O(n)$|C++: $O(1)$|
| 746  | [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/) | Easy    | [C++](./algorithms/cpp/746_Tabulation.cpp) | C++: Bottom-up DP approach. |C++: $O(n)$|C++: $O(1)$|
| 872 | [Leaf-Similar Trees](https://leetcode.com/problems/leaf-similar-trees/) | Easy    | [C++](./algorithms/cpp/872_Recursive.cpp) | C++: Recursively get all the leaf values into 2 vectors, compare the vectors at the end. |C++: $O(n)$|C++: $O(n)$|
| 1052  | [Grumpy Bookstore Owner](https://leetcode.com/problems/grumpy-bookstore-owner/) | Medium    | [C++](./algorithms/cpp/1052_SlidingWindow.cpp) | C++: Use sliding window, in the loop use 3 checks (1 for left, 1 for right and 1 for max update). |C++: $O(n)$|C++: $O(1)$|
| 1137  | [N-th Tribonacci Number](https://leetcode.com/problems/n-th-tribonacci-number/) | Easy    | [C++](./algorithms/cpp/1137_Iterative.cpp) | C++: Use an iterative approach (similar to DP but storing only 3 of the previously calculated values). |C++: $O(n)$|C++: $O(1)$|
| 1207 | [Unique Number of Occurrences](https://leetcode.com/problems/unique-number-of-occurrences/) | Easy    | [C++](./algorithms/cpp/1207_MapSet.cpp) | C++: Convert the array to a frequency map then iterate through the map and check for duplicate values using a set. |C++: $O(n)$|C++: $O(n)$|
| 1431  | [Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/) | Easy    | [C++](./algorithms/cpp/1431_Iterative.cpp) | C++: Find max then build boolean vector. |C++: $O(n)$|C++: $O(1)$|
| 1456  | [Maximum Number of Vowels in a Substring of Given Length](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/) | Medium    | [C++_Set](./algorithms/cpp/1456_SetSlidingWindow.cpp)<br><br>[C++_Conditionals](./algorithms/cpp/1456_ConditionalSlidingWindow.cpp) | C++_Set: Use 'find' or 'count' on a vowel set then use a sliding window to decrement or increment curVowels count for the subarray window.<br><br>C++_Conditionals: Use the same logic but check if the character is a vowel by conditions, it may be less readable and scalable but since the number of vowels are only 5, it often improves performance. |C++_Set: $O(n)$<br><br>C++_Conditionals: $O(n)$|C++_Set: $O(1)$<br><br>$O(1)$|
| 1732  | [Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/) | Easy    | [C++](./algorithms/cpp/1732_Iterative.cpp) | C++: Iterative approach. |C++: $O(n)$|C++: $O(1)$|
| 1768  | [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/) | Easy    | [C++](./algorithms/cpp/1768_OnePointer.cpp) | C++: Use only one pointer to keep track of the indices. |C++: $O(n)$|C++: $O(1)$|
| 2037  | [Minimum Number of Moves to Seat Everyone](https://leetcode.com/problems/mininum-number-of-moves-to-seat-everyone/) | Easy    | [C++](./algorithms/cpp/2037_Sorting.cpp) | C++: Sort the arrays, then calculate the difference between the paired elements. |C++: $O(nlog(n))$|C++: $O(log(n))$|
| 2215 | [Find the Difference of Two Arrays](https://leetcode.com/problems/find-the-difference-of-two-arrays/) | Easy    | [C++](./algorithms/cpp/2215_Set.cpp) | C++: Use sets to avoid duplicates and constant lookup time. |C++: $O(n)$|C++: $O(n)$|