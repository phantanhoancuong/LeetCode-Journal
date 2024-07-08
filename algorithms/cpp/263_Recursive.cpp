/* 263. Ugly Number
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
Given an integer n, return true if n is an ugly number.

Example 1:
Input: n = 6
Output: true
Explanation: 6 = 2 × 3

Example 2:
Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.

Example 3:
Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
 
Constraints:
-2^31 <= n <= 2^31 - 1 */

class Solution {
public:
    void recursive(bool& ugly, int num, int remainder) {
        if(ugly || remainder != 0) {
            return;
        }

        // num == 1 means n has prime factors of only 2, 3 and 5
        if(num == 1) {
            ugly = true;
            return;
        }

        recursive(ugly, num / 2, num % 2);
        recursive(ugly, num / 3, num % 3);
        recursive(ugly, num / 5, num % 5);
    }

    bool isUgly(int n) {
        // n has to be a positive integer to be an ugly number
        if(n < 1) {
            return false;
        }

        bool ugly = false;
        recursive(ugly, n, 0);
        return ugly;
    }
};