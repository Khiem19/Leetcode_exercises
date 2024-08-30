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
    void function(TreeNode* root) {
        if(root == nullptr) return;

        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
        function(root->left);
        function(root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        function(root);
        return root;
    }
};