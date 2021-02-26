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
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        
        sumRootToLeaf(root, 0, &ans);
        
        return ans;
    }

private:
    void sumRootToLeaf(TreeNode *root, int n, int *ans) {
        if(root == nullptr) {
            return;
        }
        
        n = (n<<1) | root->val;
        
        if(root->left==nullptr && root->right==nullptr) {
            *ans += n;
            return;
        }
        
        if(root->left) sumRootToLeaf(root->left, n, ans);
        if(root->right) sumRootToLeaf(root->right, n, ans);
    }
};
