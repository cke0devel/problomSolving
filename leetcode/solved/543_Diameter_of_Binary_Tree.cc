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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        
        int ans = getDepth(root->left) + getDepth(root->right);
        
        ans = max(ans, diameterOfBinaryTree(root->left));
        ans = max(ans, diameterOfBinaryTree(root->right));
        
        return ans;
    }
    
private:
    int getDepth(TreeNode *root) {
        if(root == nullptr) return 0;
        
        return 1 + max(getDepth(root->left), getDepth(root->right));
    }
};
