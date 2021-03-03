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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        
        sumOfLeftLeaves(root, &ans);
        
        return ans;
    }
    
private:
    void sumOfLeftLeaves(TreeNode *root, int *ans) {
        if(root == nullptr) return;
        
        if(root->left) {
            if(root->left->left==nullptr && root->left->right==nullptr) {
                *ans += root->left->val;
            }
        }
        
        sumOfLeftLeaves(root->left, ans);
        sumOfLeftLeaves(root->right, ans);
    }
};
