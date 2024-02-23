Author: Cuong Phan
### LeetCode Journal

| No. | Name    | Difficulty | Solution              |Notes|Time Complexity|Space Complexity|
| --- | ------- | ---------- | --------------------- |----|---|-|
| 1  | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy       | [C#](./algorithms/cs/1_HashMap.cs) | C#: Use a hashmap to look up values at constant time.|C#: $O(n)$|C#: $O(n)$|
| 2  | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | Medium       | [C#](./algorithms/cs/2_LinkedLists.cs) | C#: Remember to check if the last addition requires a carry node|C#: $O(max(m, n))$|C#: $O(max(m, n))$|
| 3  | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium       | [C#](./algorithms/cs/3_SlidingWindow.cs) | C#: Use a hashmap to to store the last visited index of a character.|C#: $O(n)$|C#: $O(min(m, n))$|
| 4  | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Hard      | [C#_Iterative](./algorithms/cs/4_Iterative.cs) | C# Iterative: Use two pointers to traverse the arrays until you encounter the medians.|C# Iterative: $O(m + n)$|C# Iterative: $O(1)$|
| 5  | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) | Medium     | [C#](./algorithms/cs/5_CenterExpansion.cs) | C#: Use two pointers 'left' and 'right' of the substring with the ith element as its center and keep expanding by the sides as long as the string is palindromic. Remember to check the both odd and even lengths.|C#: $O(n^{2})$|C#: $O(1)$|