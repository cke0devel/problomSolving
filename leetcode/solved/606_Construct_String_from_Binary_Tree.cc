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
    string tree2str(TreeNode* t) {
        if(t == nullptr) return "";
        
        string ans = to_string(t->val);
        
        if(t->left) ans += '(' + tree2str(t->left) + ')';
        else if(t->right) ans += "()";
        
        if(t->right) ans += '(' + tree2str(t->right) + ')';
        
        return ans;
    }
};
