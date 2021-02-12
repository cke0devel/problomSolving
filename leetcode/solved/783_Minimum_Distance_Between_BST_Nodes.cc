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
        vector<int> values;
        
        inorderTraversal(root, back_inserter(values));
        
        int ans = values[1] - values[0];
        
        for(int i=2; i<values.size(); i++) {
            ans = min(ans, values[i]-values[i-1]);
        }
        
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
