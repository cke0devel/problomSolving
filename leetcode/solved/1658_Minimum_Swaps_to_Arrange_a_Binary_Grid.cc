class Solution {
public:
	int minOperations(vector<int>& nums, int x) {
		vector<int> cuml(nums.size());

		int sum = 0;
		for(int i=0; i<nums.size(); i++) {
			sum += nums[i];
			cuml[i] = sum;
		}

		long ans = nums.size() + 1;
		sum = 0;
		auto it = lower_bound(begin(cuml), end(cuml), x-sum);
		if(it != cuml.end() && *it == x-sum) {
			ans = distance(begin(cuml), it) + 1;
		}

		for(int i=0; i<nums.size(); i++) {
			sum += nums[nums.size()-i-1];
			if(sum > x) break;

			if(sum == x) {
				ans = min(ans, i+1L);
			} else {
				it = lower_bound(begin(cuml), end(cuml), x-sum);
				if(it != cuml.end() && *it == x-sum) {
					ans = min(ans, i+1 + distance(begin(cuml), it) + 1);
				}
			}
		}

		return ans>nums.size() ? -1 : ans;
	}
};
