/* 22. Generate Parentheses
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:
Input: n = 1
Output: ["()"]
 
Constraints:
1 <= n <= 8 */

class Solution {
public:
    void recursion(vector<string>& result, int n, int opening, int closing, string currentString) {
        if(currentString.size() == n * 2) {
            result.push_back(currentString);
            return;
        }

        if(opening < n) {
            recursion(result, n, opening + 1, closing, currentString + '(');
        }
        if(closing < opening) {
            recursion(result, n, opening, closing + 1, currentString + ')');
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        recursion(result, n, 0, 0, "");
        return result;
    }
};