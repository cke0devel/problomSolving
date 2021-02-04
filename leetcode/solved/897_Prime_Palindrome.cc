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
    TreeNode* increasingBST(TreeNode* root) {
        if(root == nullptr) {
            return nullptr;
        }
        
        TreeNode* node = nullptr;
        
        if(root->left) {
            node = increasingBST(root->left);
        }
        if(node == nullptr) {
            node = root;
        } else {
            TreeNode *lastChild = node;
            while(lastChild->right != nullptr) {
                lastChild = lastChild->right;
            }
            lastChild->right = root;
            root->left = nullptr;
        }
        if(root->right) {
            root->right = increasingBST(root->right);
        }
        
        return node;
    }
};
