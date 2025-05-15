/* 101. Symmetric Tree
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Example 1:
Input: root = [1,2,2,3,4,4,3]
Output: true

Example 2:
Input: root = [1,2,2,null,3,null,3]
Output: false
 
Constraints:
The number of nodes in the tree is in the range [1, 1000].
-100 <= Node.val <= 100
 
Follow up: Could you solve it both recursively and iteratively? */

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
    void recursive(bool& isSym, TreeNode* p, TreeNode* q) {
        if(!isSym || (p == nullptr && q == nullptr)) {
            return;
        }
        if(p == nullptr || q == nullptr || p->val != q->val) {
            isSym = false;
            return;
        }
        recursive(isSym, p->left, q->right);
        recursive(isSym, p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        bool isSym = true;
        recursive(isSym, root->left, root->right);
        return isSym;
    }
};