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
    int minDiffInBST(TreeNode* root) {
        if(root == nullptr) {
            return 1000000;
        }
        
        int ans = minDiffInBST(root->left);
        ans = min(ans, minDiffInBST(root->right));
        
        if(root->left) ans = min(ans, abs(root->val - root->left->val));
        if(root->right) ans = min(ans, abs(root->val - root->right->val));
        
        return ans;
    }
};
