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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        preorderTraversal(root, back_inserter(ans));
        
        return ans;
    }
    
private:
    template<class ForwordIter>
    void preorderTraversal(TreeNode* root, ForwordIter iter) {
        if(root == nullptr) {
            return;
        }
        
        *iter = root->val;
        preorderTraversal(root->left, iter);
        preorderTraversal(root->right, iter);
    }
};
