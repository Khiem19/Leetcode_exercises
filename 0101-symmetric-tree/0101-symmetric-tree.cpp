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
private:
    bool isMirror(TreeNode* right, TreeNode* left) {
        if(right == nullptr && left == nullptr) return true;
        if(right == nullptr || left == nullptr) return false;
        return (right->val == left->val) && isMirror(right->right,left->left) && isMirror(right->left, left->right);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return isMirror(root->right, root->left);
    }
};