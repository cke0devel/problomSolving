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
    void flatten(TreeNode* root) {
        if(root==nullptr) {
            return;
        }
        
        TreeNode *left = root->left;
        TreeNode *right = root->right;
        
        flatten(left);
        flatten(right);

        root->left = nullptr;
        root->right = left ? left : right;
        
        if(left && right) {
            while(left->right != nullptr) left = left->right;
            left->right = right;
        }
    }
};
