/* 3121. Count the Number of Special Characters II
You are given a string word. A letter c is called special if it appears both in lowercase and uppercase in word, and every lowercase occurrence of c appears before the first uppercase occurrence of c.
Return the number of special letters in word.

Example 1:
Input: word = "aaAbcBC"
Output: 3
Explanation:
The special characters are 'a', 'b', and 'c'.

Example 2:
Input: word = "abc"
Output: 0
Explanation:
There are no special characters in word.

Example 3:
Input: word = "AbBCab"
Output: 0
Explanation:
There are no special characters in word.

Constraints:
1 <= word.length <= 2 * 10^5
word consists of only lowercase and uppercase English letters. */

class Solution {
public:
    int numberOfSpecialChars(string word) {
        // Maps to keep track of whether the character is seen
        bool lower[26] = {false};
        bool upper[26] = {false};

        for(int i = 0; i < word.size(); i++) {
            // If the current character is lowercase -> true if not yet seen uppercase, false if seen uppercase 
            if(islower(word[i])) {
                int index = word[i] - 'a';
                lower[index] = !upper[index];
            }
            // If the current character is uppercase, click true
            else {
                int index = word[i] - 'A';
                upper[index] = true;
            }
        }
        // The condition is satisfied with both values for upper and lower are true
        int counter = 0;
        for(int i = 0; i < 26; i++) {
            if(lower[i] && upper[i]) {
                counter++;
            }
        }
        return counter;
    }
};