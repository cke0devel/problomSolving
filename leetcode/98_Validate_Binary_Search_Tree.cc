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
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, numeric_limits<int>::min(), numeric_limits<int>::max());
    }
    
private:
    bool isValidBST(TreeNode *root, const int low, const int high) {
        if(root == nullptr) {
            return true;
        }
        
        if(low > root->val || root->val > high) {
            return false;
        }
        
        if(root->left && isValidBST(root->left, low, root->val-1)==false) {
            return false;
        }
        if(root->right && isValidBST(root->right, root->val+1, high)==false) {
            return false;
        }
        
        return true;
    }
};
