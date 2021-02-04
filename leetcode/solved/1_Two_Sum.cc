class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int,int> idxMap;

		for(int i=0; i<nums.size(); i++) {
			const auto it = idxMap.find(target - nums[i]);

			if(it != idxMap.end()) {
				return {i, it->second};
			}

			idxMap[nums[i]] = i;
		}

		return {-1, -1};
	}
};
