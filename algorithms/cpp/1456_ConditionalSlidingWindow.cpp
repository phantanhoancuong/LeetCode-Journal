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

// Version 1: 
class Solution {
public:
    bool isVowel(char& ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int curVowels = 0;
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) {
                curVowels++;
            }
        }

        int maxVowels = curVowels;

        int n = s.size();
        for(int i = k; i < n; i++) {
            if(isVowel(s[i])) {
                curVowels++;
            }
            if(isVowel(s[i - k])) {
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

// Version 2:
class Solution {
public:
    int maxVowels(string s, int k) {
        int curVowels = 0;
        for(int i = 0; i < k; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                curVowels++;
            }
        }

        int maxVowels = curVowels;

        int n = s.size();
        for(int i = k; i < n; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                curVowels++;
            }
            if(s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
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