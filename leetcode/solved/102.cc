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
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> ans;

		if(root == nullptr) {
			return ans;
		}

		deque<pair<TreeNode*,int>> q;
		q.emplace_back(root, 1);
		while(!q.empty()) {
			const auto [node, level] = q.front();
			q.pop_front();

			if(ans.size() == level-1) {
				ans.emplace_back(vector<int>({node->val}));
			} else {
				ans[level-1].emplace_back(node->val);
			}

			if(node->left) {
				q.emplace_back(node->left, level+1);
			}
			if(node->right) {
				q.emplace_back(node->right, level+1);
			}
		}

		return ans;
	}
};
