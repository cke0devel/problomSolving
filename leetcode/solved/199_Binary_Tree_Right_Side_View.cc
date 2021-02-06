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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        
        rightSideView(root, 0, &ans);
        
        return ans;
    }
    
private:
    void rightSideView(TreeNode *root, const int depth, vector<int> *view) {
        if(root == nullptr) return;
     
        if(view->size() <= depth) {
            view->push_back(root->val);
        }
        
        rightSideView(root->right, depth+1, view);
        rightSideView(root->left, depth+1, view);
    }
};
