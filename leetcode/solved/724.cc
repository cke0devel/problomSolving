class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		const int32_t total = accumulate(begin(nums), end(nums), 0);

		int32_t sum = 0;
		for(int pivot=0; pivot<nums.size(); pivot++) {
			if(sum == total-sum-nums[pivot]) {
				return pivot;
			}

			sum += nums[pivot];
		}

		return -1;
	}
};
