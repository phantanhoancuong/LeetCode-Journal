/* 7. Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21
 
Constraints:
-231 <= x <= 231 - 1 */

public class Solution {
    public int Reverse(int x) {
        
        int result = 0;

        // Iterate through the digits of x
        while(x != 0) {
            // Check to see if overflows or underflow
            if((result > int.MaxValue / 10) || (result < int.MinValue / 10)) {
                return 0;
            }

            // Add the tail digit of x to result
            int digit = x % 10;
            result = result * 10 + digit;
            x /= 10;
        }
        return result;
    }
}