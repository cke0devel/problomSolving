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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        inorderTraversal(root, back_inserter(ans));
        
        return ans;
    }
    
private:
    template<class ForwordIter>
    void inorderTraversal(TreeNode* root, ForwordIter iter) {
        if(root == nullptr) {
            return;
        }
        
        inorderTraversal(root->left, iter);
        *iter = root->val;
        inorderTraversal(root->right, iter);
    }
};
