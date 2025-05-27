/* 
22. Generate Parentheses
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:
Input: n = 1
Output: ["()"]
 
Constraints:
1 <= n <= 8 
*/

class Solution {
    public:
        vector<string> generateParenthesis(int n) {
            vector<string> res;
            stack<tuple<string, int, int>> stk;
            stk.push({"", 0, 0});
            int maxLen = 2 * n;
            while(!stk.empty()) {
                auto [exp, openCount, closeCount] = stk.top();
                stk.pop();
    
                if(exp.size() == maxLen) {
                    res.push_back(exp);
                    continue;
                }
    
                if(openCount < n) {
                    stk.push({exp + "(", openCount + 1, closeCount});
                }
                if(closeCount < openCount) {
                    stk.push({exp + ")", openCount, closeCount + 1});
                }
            }
            return res;
        }
    };