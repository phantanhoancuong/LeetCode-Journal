/* 383. Ransom Note
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.

Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true
 
Constraints:

1 <= ransomNote.length, magazine.length <= 10^5
ransomNote and magazine consist of lowercase English letters. */

class Solution {
public:
    void BuildMap(string s, unordered_map<char, int>& map) {
        for(int i = 0; i < s.size(); i++) {
            map[s[i]]++;
        }
    }

    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineFrequency;

        BuildMap(magazine, magazineFrequency);

        for(int i = 0; i < ransomNote.size(); i++) {
            magazineFrequency[ransomNote[i]]--;
            if(magazineFrequency[ransomNote[i]] < 0) {
                return false;
            }
        }
        return true;
    }
};