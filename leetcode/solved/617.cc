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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==nullptr && t2==nullptr) {
            return nullptr;
        }
        
        TreeNode *node = new TreeNode;
        
        if(t1) {
            node->val += t1->val;
        }
        if(t2) {
            node->val += t2->val;
        }
        
        node->left = mergeTrees(t1==nullptr ? nullptr : t1->left,
                                t2==nullptr ? nullptr : t2->left);
        
        node->right = mergeTrees(t1==nullptr ? nullptr : t1->right,
                                 t2==nullptr ? nullptr : t2->right);
        
        return node;
    }
};
