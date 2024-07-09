/* 1302. Deepest Leaves Sum
Given the root of a binary tree, return the sum of values of its deepest leaves.

Example 1:
Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15

Example 2:
Input: root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
Output: 19

Constraints:
The number of nodes in the tree is in the range [1, 10^4].
1 <= Node.val <= 100 */

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
    void recursive(int curDepth, int& maxDepth, int& sum, TreeNode* curNode) {
        if(curNode == nullptr) {
            return;
        }

        if(curNode->left == nullptr && curNode->right == nullptr) {
            if(curDepth > maxDepth) {
                sum = curNode->val;
                maxDepth = curDepth;
            }
            else if(curDepth == maxDepth) {
                sum += curNode->val;
            }
            return;
        }
        recursive(curDepth + 1, maxDepth, sum, curNode->left);
        recursive(curDepth + 1, maxDepth, sum, curNode->right);
    }
    int deepestLeavesSum(TreeNode* root) {
        int maxDepth = 0;
        int sum = 0;
        recursive(0, maxDepth, sum, root);
        return sum;
    }
};