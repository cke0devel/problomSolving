class Solution {
	public:
		vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
			vector<vector<int>> ans;

			vector<int> v;
			combinationSum(candidates, 0, target, v, ans);

			return ans;
		}

	private:
		void combinationSum(const vector<int> &candidates, const int p, const int target,
				vector<int> &v, vector<vector<int>> &ans)
		{
			if(target == 0) {
				ans.push_back(v);
				return;
			}

			if(target<0 || p>=candidates.size()) {
				return;
			}

			v.push_back(candidates[p]);
			combinationSum(candidates, p, target-candidates[p], v, ans);
			v.pop_back();
			combinationSum(candidates, p+1, target, v, ans);
		}
};
