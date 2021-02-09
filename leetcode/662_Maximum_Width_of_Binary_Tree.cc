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
    int widthOfBinaryTree(TreeNode* root) {
        map<int, pair<int,int>> widths;
        
        widthOfBinaryTree(root, 0, 1, widths);
        
        int ans = 0;
        for(const auto &e : widths) {
            ans = max(ans, e.second.second - e.second.first + 1);
        }
        
        return ans;
    }
    
private:
    void widthOfBinaryTree(const TreeNode *root,
                           const int depth, const int idx,
                           map<int, pair<int,int>> &widths)
    {
        if(root == nullptr) return;
        
        auto it = widths.find(depth);
        if(it == widths.end()) {
            widths[depth] = {idx,idx};
        } else {
            it->second.first = min(it->second.first, idx);
            it->second.second = max(it->second.second, idx);
        }
        
        if(root->left) widthOfBinaryTree(root->left, depth+1, idx*2, widths);
        if(root->right) widthOfBinaryTree(root->right, depth+1, idx*2+1, widths);
    }
};
