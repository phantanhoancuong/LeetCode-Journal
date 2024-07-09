/* 100. Same Tree
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Example 1:
Input: p = [1,2,3], q = [1,2,3]
Output: true

Example 2:
Input: p = [1,2], q = [1,null,2]
Output: false

Example 3:
Input: p = [1,2,1], q = [1,1,2]
Output: false
 
Constraints:
The number of nodes in both trees is in the range [0, 100].
-10^4 <= Node.val <= 10^4 */

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
    void recursive(bool& isSame, TreeNode* p, TreeNode* q) {
        if(!isSame){
            return;
        } 
        if(p == nullptr && q == nullptr){
            return;
        } 
        if(p == nullptr || q == nullptr || p->val != q->val) {
            isSame = false;
            return;
        }
        recursive(isSame, p->left, q->left);
        recursive(isSame, p->right, q->right);
    }


    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool isSame = true;
        recursive(isSame, p, q);
        return isSame;
    }
};