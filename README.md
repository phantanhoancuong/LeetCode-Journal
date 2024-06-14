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
| 11  | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | Medium    | [C#](./algorithms/cs/11_TwoPointers.cs) | C#: Use two pointers at the start and end of array, contract the container by the lower wall's side. |C#: $O(n)$|C#: $O(1)$|
| 13  | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | Easy    | [C++](./algorithms/cpp/13_Iterative.cpp) | C++: If the next numeral is larger then subtract the current one, else add it. |C++: $O(n)$|C++: $O(1)$|
| 15  | [3Sum](https://leetcode.com/problems/3sum/) | Medium    | [C++](./algorithms/cpp/15_TwoPointers.cpp) | C++: Sort the array, iterate through the array as "fixed value" then use two pointers on the subarray on the right to find the triplets. |C++: $O(n^2)$|C++: $O(1)$|
| 16  | [3Sum Closest](https://leetcode.com/problems/3sum-closest/) | Medium    | [C++](./algorithms/cpp/16_TwoPointers.cpp) | C++: Sort the array, iterate through the array as "fixed value" then use two pointers on the subarray on the right to find the triplet. |C++: $O(n^2)$|C++: $O(1)$|
| 75  | [Sort Colors](https://leetcode.com/problems/sort-colors/) | Medium    | [C++](./algorithms/cpp/75_ThreePointers.cpp) | C++: Use the Dutch National Flag (3-way partition algorithm). |C++: $O(n)$|C++: $O(1)$|
| 118  | [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) | Easy    | [C++](./algorithms/cpp/118_Combinatorial.cpp) | C++: Initialize each row with values of 1, adjust the middle values with combinatorial formula. |C++: $O(n^2)$|C++: $O(n^2)$|
| 119  | [Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii/) | Easy    | [C++_TwoRows](./algorithms/cpp/119_TwoRows.cpp)<br><br>[C++_OneRow](./algorithms/cpp/119_OneRow.cpp) | C++_TwoRows: Make base rows - vector<int> prevRow(1, 1) and use two vectors to store the current row and the previous row for calculation. <br><br>C++_OneRow: Use a single row with size rowIndex + 1, calculate the middle values backwards (row[j] += row[j - 1]).|C++_TwoRows: $O(n^2)$<br><br>C++_OneRow: $O(n^2)|C++_TwoRows: $O(n)$<br><br>C++_OneRow: $O(n)|