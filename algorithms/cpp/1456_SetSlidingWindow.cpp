/* 1456. Maximum Number of Vowels in a Substring of Given Length
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

Example 1:
Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.

Example 2:
Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.

Example 3:
Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.

Constraints:
1 <= s.length <= 10^5
s consists of lowercase English letters.
1 <= k <= s.length */

class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int curVowels = 0;
        for(int i = 0; i < k; i++) {
            if(vowels.count(s[i])) {
                curVowels++;
            }
        }

        int maxVowels = curVowels;

        int n = s.size();
        for(int i = k; i < n; i++) {
            if(vowels.count(s[i])) {
                curVowels++;
            }
            if(vowels.count(s[i - k])) {
                curVowels--;
            }
            maxVowels = max(maxVowels, curVowels);
            if(maxVowels == k) {
                return maxVowels;
            }
        }

        return maxVowels;
    }
};