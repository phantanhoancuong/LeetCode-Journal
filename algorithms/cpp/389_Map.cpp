/* 389. Find the Difference
You are given two strings s and t.
String t is generated by random shuffling string s and then add one more letter at a random position.
Return the letter that was added to t.

Example 1:
Input: s = "abcd", t = "abcde"
Output: "e"
Explanation: 'e' is the letter that was added.

Example 2:
Input: s = "", t = "y"
Output: "y"
 
Constraints:
0 <= s.length <= 1000
t.length == s.length + 1
s and t consist of lowercase English letters. */

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mappings;
        for(int i = 0; i < s.size(); i++) {
            mappings[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++) {
            mappings[t[i]]--;
            if(mappings[t[i]] < 0) {
                return t[i];
            }
        }
        return 'a';
    }
};