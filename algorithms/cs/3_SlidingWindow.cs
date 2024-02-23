/* 3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substringwithout repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
 */
 
public class Solution {
    public int LengthOfLongestSubstring(string s) {

        Dictionary<char, int> visited = new Dictionary<char, int>();

        int maxLength = 0;

        for(int right = 0, left = 0; right < s.Length; right++) {
            char currentChar = s[right];

            // If the current char has been visited
            if(visited.ContainsKey(currentChar)) {

                // If visited key is inside the current substring
                if(visited[currentChar] >= left) {
                    left = visited[currentChar] + 1;
                }

                // Update last visited index
                visited[currentChar] = right;
            }
            else {
                // Add unvisited character to visted map
                visited.Add(currentChar, right);
            }

            maxLength = Math.Max(maxLength, right - left + 1);
        }
        return maxLength;
    }
}