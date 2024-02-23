/* 5. Longest Palindromic Substring
Given a string s, return the longest palindromic substring in s.

Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:
Input: s = "cbbd"
Output: "bb" */
 
public class Solution {
    public string LongestPalindrome(string s) {
        
        int maxLeft = 0;
        int maxRight = 0;

        for(int i = 0; i < s.Length; i++) {
            // Check for odd length palindromes
            for(int left = i, right = i; left >= 0 && right < s.Length && isPalindrome(s, left, right); left--, right++) {
                // Expand from the ith character to get a substring with that character as the center
                if((right - left) > (maxRight - maxLeft)) {
                    maxLeft = left;
                    maxRight = right;
                }
            }

            // Check for even length palindromes
            for(int left = i, right = i + 1; left >= 0 && right < s.Length && isPalindrome(s, left, right); left--, right++) {
                // Expand from the ith character to get a substring with that character as the center
                if((right - left) > (maxRight - maxLeft)) {
                    maxLeft = left;
                    maxRight = right;
                }
            }
        }

        return s.Substring(maxLeft, maxRight - maxLeft + 1);
    }

    // Check if a substring is a palindrome
    public bool isPalindrome(string s, int left, int right) {
        while(left < right) {
            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}