class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		vector<int> sorted(begin(nums), end(nums));
		sort(begin(sorted), end(sorted));

		vector<int> ans;
		for(const auto n : nums) {
			auto it = lower_bound(begin(sorted), end(sorted), n);
			ans.push_back(distance(begin(sorted), it));
		}

		return ans;
	}
};
