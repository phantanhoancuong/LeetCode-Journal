/* 345. Reverse Vowels of a String
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Example 1:
Input: s = "hello"
Output: "holle"

Example 2:
Input: s = "leetcode"
Output: "leotcede"
 
Constraints:
1 <= s.length <= 3 * 10^5
s consist of printable ASCII characters. */

class Solution {
public:
    bool isVowel(char c) {
        const static unordered_set<char> vowels { 'a', 'e', 'i', 'o', 'u' };
        return vowels.find(tolower(c)) != vowels.end();
    }

    string reverseVowels(string s) {

        int left = 0;
        int right = s.size() - 1;
        while(left < right) {
            while(!isVowel(s[left]) && left < right) {
                left++;
            }
            while(!isVowel(s[right]) && left < right) {
                right--;
            }
            swap(s[right], s[left]);
            left++;
            right--;
        }
        return s;
    }
};