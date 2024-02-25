/* 118. Pascal's Triangle
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:
Input: numRows = 1
Output: [[1]]

Constraints:
1 <= numRows <= 30
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;

        for(int i = 0; i < numRows; i++) {

            // Initialize vector with size i + 1 and values of 1
            vector<int> pascalRow(i + 1, 1);
            for(int j = 1; j <= i - 1; j++) {

                // Replace the middle values according to the formula
                pascalRow[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }

            // Add the row into the triangle
            pascalTriangle.push_back(pascalRow);
        }
        return pascalTriangle;
    }
};