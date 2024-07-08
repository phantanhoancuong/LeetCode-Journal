/* 2384. Largest Palindromic Number
You are given a string num consisting of digits only.
Return the largest palindromic integer (in the form of a string) that can be formed using digits taken from num. It should not contain leading zeroes.
Notes:
You do not need to use all the digits of num, but you must use at least one digit.
The digits can be reordered.
 
Example 1:
Input: num = "444947137"
Output: "7449447"
Explanation: 
Use the digits "4449477" from "444947137" to form the palindromic integer "7449447".
It can be shown that "7449447" is the largest palindromic integer that can be formed.

Example 2:
Input: num = "00009"
Output: "9"
Explanation: 
It can be shown that "9" is the largest palindromic integer that can be formed.
Note that the integer returned should not contain leading zeroes.
 
Constraints:
1 <= num.length <= 10^5
num consists of digits. */

class Solution {
public:
    string largestPalindromic(string num) {
        int frequency[10] = {0};
        // Build a frequency map
        for(int i = 0; i < num.size(); i++) {
            frequency[num[i] - '0']++;
        }
        string left;
        string mid;

        // Build a decreasing left string to ensure the result is largest
        for(int i = 9; i >= 0; i--) {
            while(frequency[i] > 1) {
                // Skip leadings zeroes
                if(!(left.empty() && i == 0)) {
                    left += i + '0';
                }
                frequency[i] -= 2;
            }
        }

        // Get a middle string if exists an odd-frequency digit
        for(int i = 9; i >= 0; i--) {
            if(frequency[i] == 1) {
                mid += i + '0';
                break;
            }
        }

        // 0 if you can't contruct any string
        if(left.empty() && mid.empty()) {
            return "0";
        }

        // The right string is mirrored 
        // Return the complete string (append three small strings)
        string right = left;
        reverse(right.begin(), right.end());
        return left + mid + right;
    }
};