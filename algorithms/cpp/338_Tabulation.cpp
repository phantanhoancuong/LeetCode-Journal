/* 338. Counting Bits
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

Example 2:
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 
Constraints:
0 <= n <= 10^5
  */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp;
        dp.push_back(0);
        if(n == 0) {
            return dp;
        }
        dp.push_back(1);
        if(n == 1) {
            return dp;
        }

        for(int i = 2; i <= n; i++) {
            dp.push_back(dp[i / 2] + dp[i % 2]);
        }
        return dp;
    }
};