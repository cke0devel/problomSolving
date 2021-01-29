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
        map<int,multiset<pair<int,int>>> m;
        verticalTraversal(root, 0, 0, &m);
        
        vector<vector<int>> ans(m.size());
        auto it = begin(ans);
        for(const auto &e : m) {
            transform(begin(e.second), end(e.second), back_inserter(*it),
                      [](const auto k) { return k.second; });
            ++it;
        }
        
        return ans;
    }
    
private:
    void verticalTraversal(TreeNode* root, const int y, const int x, map<int,multiset<pair<int,int>>> *m) {
        if(root == nullptr) {
            return;
        }
        
        (*m)[x].emplace(y, root->val);
        verticalTraversal(root->left, y+1, x-1, m);
        verticalTraversal(root->right, y+1, x+1, m);
    }
};
