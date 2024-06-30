/* 637. Average of Levels in Binary Tree
Given the root of a binary tree, return the average value of the nodes on each level in the form of an array. Answers within 10-5 of the actual answer will be accepted.

Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: [3.00000,14.50000,11.00000]
Explanation: The average value of nodes on level 0 is 3, on level 1 is 14.5, and on level 2 is 11.
Hence return [3, 14.5, 11].

Example 2:
Input: root = [3,9,20,15,7]
Output: [3.00000,14.50000,11.00000]
 
Constraints:
The number of nodes in the tree is in the range [1, 104].
-2^31 <= Node.val <= 2^31 - 1 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void recursive(int currentIndex, vector<double>& result, vector<int>& nodeAtLevel, TreeNode* current) {
        if(current == nullptr) {
            return;
        }
        if(nodeAtLevel.size() <= currentIndex) {
            nodeAtLevel.push_back(1);
            result.push_back(current->val);
        }
        else {
            nodeAtLevel[currentIndex]++;
            result[currentIndex] += current->val;
        }
        recursive(currentIndex + 1, result, nodeAtLevel, current->left);
        recursive(currentIndex + 1, result, nodeAtLevel, current->right);
    }

    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        vector<int> nodeAtLevel;
        recursive(0, result, nodeAtLevel, root);
        for(int i = 0; i < result.size(); i++) {
            result[i] /= (double)nodeAtLevel[i];
        }
        return result;
    }
};