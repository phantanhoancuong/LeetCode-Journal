/* 513. Find Bottom Left Tree Value
Given the root of a binary tree, return the leftmost value in the last row of the tree.

Example 1:
Input: root = [2,1,3]
Output: 1

Example 2:
Input: root = [1,2,3,4,null,5,6,null,null,7]
Output: 7
 
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
    void recursive(TreeNode* curNode, int& result, int& maxDepth, int curDepth) {
        if(curNode == nullptr) {
            return;
        }
        if(curNode->left == nullptr && (curDepth > maxDepth || curDepth == 0)) {
            result = curNode->val;
            maxDepth = curDepth;
        }
        recursive(curNode->left, result, maxDepth, curDepth + 1);
        recursive(curNode->right, result, maxDepth, curDepth + 1);
    }
    int findBottomLeftValue(TreeNode* root) {
        int result = 0;
        int maxDepth = 0;
        recursive(root, result, maxDepth, 0);
        return result;
    }
};