class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		unordered_multiset<int> sums = {0};

		int sum = 0;
		int cnt = 0;
		for(const auto n : nums) {
			sum += n;

			cnt += sums.count(sum-k);
			sums.insert(sum);
		}

		return cnt;
	}
};
