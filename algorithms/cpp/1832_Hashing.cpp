/* 1832. Check if the Sentence Is Pangram
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Example 2:
Input: sentence = "leetcode"
Output: false
 
Constraints:
1 <= sentence.length <= 1000
sentence consists of lowercase English letters. */

class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool hasSeen[26] = {false};
        int counter = 0;
        for(int i = 0; i < sentence.size(); i++) {
            int arrIndex = sentence[i] - 'a';
            if(!hasSeen[arrIndex]) {
                hasSeen[arrIndex] = true;
                counter++;
            }
            if(counter == 26) {
                return true;
            }
        }
        return false;
    }
};