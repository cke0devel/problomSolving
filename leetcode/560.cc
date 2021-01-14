class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		int cnt = 0;
		int sum = 0;

		for(int i=0,j=0; i<nums.size(); i++) {
			sum += nums[i];
			if(sum == k) cnt += 1;

			for(;sum>k; j++) {
				sum -= nums[j];
				if(sum == k) cnt += 1;
			}
		}

		return cnt;
	}
};
