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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        return addOneRow(root, v, d, true);
    }
    
private:
    TreeNode* addOneRow(TreeNode *root, const int v, const int d, const bool fromLeft) {
        if(d == 1) {
            if(fromLeft) root = new TreeNode(v, root, nullptr);
            else         root = new TreeNode(v, nullptr, root);
        } else if(root != nullptr) {
            root->left = addOneRow(root->left, v, d-1, true);
            root->right = addOneRow(root->right, v, d-1, false);
        }
        
        return root;
    }
};
