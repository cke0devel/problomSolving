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
    TreeNode* convertBST(TreeNode* root) {
        convertBST(root, 0);
        
        return root;
    }

private:
    TreeNode* convertBST(TreeNode *root, const int base) {
        if(root == nullptr) return root;
        
        TreeNode *left = root;
        
        if(root->right) {
            TreeNode *rightleft = convertBST(root->right, base);
            root->val += rightleft->val;
        } else {
            root->val += base;
        }

        if(root->left) {
            left = convertBST(root->left, root->val);
        }
        
        return left;
    }
};
