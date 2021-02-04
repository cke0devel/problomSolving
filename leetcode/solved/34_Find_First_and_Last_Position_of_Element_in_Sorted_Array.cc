class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		const auto lowerIter = lower_bound(begin(nums), end(nums), target);

		if(lowerIter==nums.end() || *lowerIter!=target) {
			return {-1,-1};
		}

		const auto upperIter = upper_bound(begin(nums), end(nums), target) - 1;

		return {(int)distance(begin(nums), lowerIter),
			(int)distance(begin(nums), upperIter)};
	}
};
