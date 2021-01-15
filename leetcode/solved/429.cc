/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
	vector<vector<int>> levelOrder(Node* root) {
		vector<vector<int>> ans;

		if(root == nullptr) {
			return ans;
		}

		deque<pair<Node*, int>> q;
		q.emplace_back(root, 1);
		while(!q.empty()) {
			const auto [node, level] = q.front();
			q.pop_front();

			if(ans.size() == level-1) {
				ans.emplace_back(vector<int>({node->val}));
			} else {
				ans[level-1].push_back(node->val);
			}

			for(const auto child : node->children) {
				q.emplace_back(child, level+1);
			}
		}

		return ans;
	}
};
