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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>> m;
        verticalTraversal(root, 0, &m);
        
        vector<vector<int>> ans;
        transform(begin(m), end(m), back_inserter(ans),
                 [](auto &e) {
                     sort(begin(e.second), end(e.second));
                     return move(e.second);
                 });
        
        return ans;
    }
    
private:
    void verticalTraversal(TreeNode* root, int coord, map<int,vector<int>> *m) {
        if(root == nullptr) {
            return;
        }
        
        (*m)[coord].push_back(root->val);
        verticalTraversal(root->left, coord-1, m);
        verticalTraversal(root->right, coord+1, m);
    }
};
