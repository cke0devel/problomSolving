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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> levels;

        if(root == nullptr) {
            return levels;
        }
        
		deque<TreeNode*> q;
		q.push_back(root);
        bool flip = false;
		while(!q.empty()) {            
            levels.push_back(vector<int>());
            
            for(int i=0,sz=q.size(); i<sz; i++) {
                const TreeNode *node = q.front();
                q.pop_front();
                
                levels.back().push_back(node->val);
                
                if(node->left) q.push_back(node->left);
                if(node->right) q.push_back(node->right);
            }
            
            if(flip) {
                reverse(begin(levels.back()), end(levels.back()));
            }
            flip = !flip;
		}
        
        return levels;
    }
};
