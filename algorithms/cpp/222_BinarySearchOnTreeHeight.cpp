/* 222. Count Complete Tree Nodes
Given the root of a complete binary tree, return the number of the nodes in the tree.
According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. 
It can have between 1 and 2h nodes inclusive at the last level h.
Design an algorithm that runs in less than O(n) time complexity.

Example 1:
Input: root = [1,2,3,4,5,6]
Output: 6

Example 2:
Input: root = []
Output: 0

Example 3:
Input: root = [1]
Output: 1
 
Constraints:
The number of nodes in the tree is in the range [0, 5 * 10^4].
0 <= Node.val <= 5 * 10^4
The tree is guaranteed to be complete. */

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
        int getHeight(TreeNode* node) {
            int height = 0;
            while (node) {
                height++;
                node = node->left;
            }
            return height;
        }
    
        int countNodes(TreeNode* root) {
            if (!root) return 0;
    
            int leftHeight = getHeight(root->left);
            int rightHeight = getHeight(root->right);
    
            if (leftHeight == rightHeight) {
                return (1 << leftHeight) + countNodes(root->right);
            } else {
                return (1 << rightHeight) + countNodes(root->left);
            }
        }
    };
    