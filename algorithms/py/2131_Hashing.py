"""
2131. Longest Palindrome by Concatenating Two Letter Words
You are given an array of strings words. Each element of words consists of two lowercase English letters.
Create the longest possible palindrome by selecting some elements from words and concatenating them in any order. Each element can be selected at most once.
Return the length of the longest palindrome that you can create. If it is impossible to create any palindrome, return 0.
A palindrome is a string that reads the same forward and backward.

Example 1:
Input: words = ["lc","cl","gg"]
Output: 6
Explanation: One longest palindrome is "lc" + "gg" + "cl" = "lcggcl", of length 6.
Note that "clgglc" is another longest palindrome that can be created.

Example 2:
Input: words = ["ab","ty","yt","lc","cl","ab"]
Output: 8
Explanation: One longest palindrome is "ty" + "lc" + "cl" + "yt" = "tylcclyt", of length 8.
Note that "lcyttycl" is another longest palindrome that can be created.

Example 3:
Input: words = ["cc","ll","xx"]
Output: 2
Explanation: One longest palindrome is "cc", of length 2.
Note that "ll" is another longest palindrome that can be created, and so is "xx".

Constraints:
1 <= words.length <= 10^5
words[i].length == 2
words[i] consists of lowercase English letters.
"""


class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        occurence_map = {}
        for word in words:
            occurence_map[word] = occurence_map.get(word, 0) + 1

        word_pairs = 0
        found_center = False

        for word in occurence_map:
            if occurence_map[word] == 0:
                continue
            reversed_word = word[::-1]
            if word == reversed_word:
                # Case 1: Symmetric word (e.g., "aa")
                word_pairs += (occurence_map[word] // 2) * 2
                if occurence_map[word] % 2 == 1:
                    found_center = True
            elif reversed_word in occurence_map:
                # Case 2: Asymmetric reversible pair (e.g., "ab" and "ba")
                word_pairs += min(occurence_map[word], occurence_map[reversed_word]) * 2
                # Avoid double processing
                occurence_map[reversed_word] = 0

        return (word_pairs + 1) * 2 if found_center else word_pairs * 2
