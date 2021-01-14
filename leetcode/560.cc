class Solution {
	public:
		int subarraySum(vector<int>& nums, int k) {
			unordered_set<int> sums = {0};

			int sum = 0;
			int cnt = 0;
			for(const auto n : nums) {
				sum += n;

				if(sums.find(sum-k) != sums.end()) {
					cnt += 1;
				}

				sums.insert(sum);
			}

			return cnt;
		}
};
