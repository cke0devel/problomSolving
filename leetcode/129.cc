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
    int sumNumbers(TreeNode* root) {
        return sumNumbers(root, 0);
    }
    
private:
    int sumNumbers(TreeNode* root, const int n) {
        const int k = n*10 + root->val;
        
        if(root->left==nullptr && root->right==nullptr) {
            return k;
        }
        
        int ans = 0;
        if(root->left) ans += sumNumbers(root->left, k);
        if(root->right) ans += sumNumbers(root->right, k);
        
        return ans;
    }
};
