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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<double>> levels;

		deque<pair<TreeNode*,int>> q;
		q.emplace_back(root, 1);
		while(!q.empty()) {
			const auto [node, level] = q.front();
			q.pop_front();

			if(levels.size() == level-1) {
				levels.push_back(vector<double>({(double)node->val}));
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

        vector<double> ans;
        transform(begin(levels), end(levels), back_inserter(ans),
                 [](const auto &l) {
                     return accumulate(begin(l), end(l), 0.) / l.size();
                 });
        
		return ans;
    }
};
