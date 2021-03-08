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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        
        dfs(root1, back_inserter(ans));
        dfs(root2, back_inserter(ans));
        
        sort(begin(ans), end(ans));
        return ans;
    }
    
private:
    template<typename Iter>
    void dfs(TreeNode *root, Iter inserter) {
        if(root == nullptr) {
            return;
        }
        
        inserter = root->val;
        dfs(root->left, inserter);
        dfs(root->right, inserter);
    }
};
