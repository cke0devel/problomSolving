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
    vector<int> largestValues(TreeNode* root) {
        if(root == nullptr) return {};
        
        vector<vector<int>> levels;

		deque<pair<TreeNode*,int>> q;
		q.emplace_back(root, 1);
		while(!q.empty()) {
			const auto [node, level] = q.front();
			q.pop_front();

			if(levels.size() == level-1) {
				levels.push_back(vector<int>({(int)node->val}));
			} else {
				levels[level-1].push_back(node->val);
			}

			if(node->left) {
				q.emplace_back(node->left, level+1);
			}
			if(node->right) {
				q.emplace_back(node->right, level+1);
			}
		}

        vector<int> ans;
        transform(begin(levels), end(levels), back_inserter(ans),
                 [](const auto &l) {
                     return *max_element(begin(l), end(l));
                 });
        
		return ans;
    }
};
