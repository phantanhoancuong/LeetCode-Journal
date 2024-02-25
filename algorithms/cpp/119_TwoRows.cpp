/* 119. Pascal's Triangle II
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example 1:
Input: rowIndex = 3
Output: [1,3,3,1]

Example 2:
Input: rowIndex = 0
Output: [1]

Example 3:
Input: rowIndex = 1
Output: [1,1]
 
Constraints:
0 <= rowIndex <= 33

Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space? */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        // Create base row
        vector<int> prevRow(1, 1);
        vector<int> currentRow = prevRow;

        for(int i = 1; i <= rowIndex; i++) {

            // Initialize current row with values of 1
            currentRow = vector<int>(i + 1, 1);
            for(int j = 1; j < i; j++) {

                // Change the middle values according to the formula
                currentRow[j] = prevRow[j - 1] + prevRow[j];
            }

            // Update the previous row
            prevRow = currentRow;
        }
    
        return currentRow;
    }
};