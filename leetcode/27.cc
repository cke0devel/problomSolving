class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		auto lastIter = find_if_not(rbegin(nums), rend(nums),
				[&val](const int k){return k==val;});
		if(lastIter == nums.rend()) {
			return 0;
		}
		if(lastIter == nums.rbegin()) {
			return nums.size();
		}

		auto keyIter = begin(nums);
		while(true) {
			keyIter = find(keyIter, end(nums), val);

			if(distance(keyIter, lastIter.base()-1) < 0) {
				return distance(lastIter, rend(nums));
			}

			swap(*keyIter, *lastIter);
			lastIter = find_if_not(lastIter, rend(nums),
					[&val](const int k){return k==val;});
		}

		return 0;
	}
};
