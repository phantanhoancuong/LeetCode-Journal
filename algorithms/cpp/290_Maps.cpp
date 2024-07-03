/* 290. Word Pattern
Given a pattern and a string s, find if s follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

Example 1:
Input: pattern = "abba", s = "dog cat cat dog"
Output: true

Example 2:
Input: pattern = "abba", s = "dog cat cat fish"
Output: false

Example 3:
Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false

Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space. */

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int strIndex = 0;
        int patIndex = 0;
        unordered_map<string, char> strToPat;
        unordered_map<char, string> patToStr;
        int strSize = s.size();
        int patSize = pattern.size(); 

        for(int i = 0; i < strSize; i++) {
            // If the pattern string runs out of character -> False
            if(patIndex >= patSize) {
                return false;
            }

            if(i == strSize - 1 || s[i + 1] == ' ') {
                // Split the word
                string curWord = s.substr(strIndex, i - strIndex + 1);
                char curPat = pattern[patIndex];

                
                if(strToPat.find(curWord) == strToPat.end() && patToStr.find(curPat) == patToStr.end()) {
                    strToPat[curWord] = curPat;
                    patToStr[curPat] = curWord;
                }
                else if(strToPat.find(curWord) == strToPat.end() || patToStr.find(curPat) == patToStr.end()) {
                    return false;
                }
                if(strToPat[curWord] != curPat || patToStr[curPat] != curWord) {
                    return false;
                }

                // Skip over the space character
                strIndex = i + 2;
                patIndex++;
            }
        }

        // Only true if we've exhausted both pattern and s
        return patIndex == patSize;
    }
};