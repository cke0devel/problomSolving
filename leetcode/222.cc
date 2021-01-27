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
    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;
        
        return countNodes(root, 1);
    }
    
private:
    int countNodes(TreeNode* root, int idx) {
        if(root->right) {
            if(root->right->left!=nullptr) {
                return countNodes(root->right, idx*2+1);
            }
            if(root->left->left==nullptr) {
                return idx*2 + 1;
            }
        }
        if(root->left) {
            return countNodes(root->left, idx*2);
        }
        
        return idx;
    }
};
