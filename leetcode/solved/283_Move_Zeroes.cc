static bool isZero(const int n) {
	return (n==0);
}

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		auto zeroIter = begin(nums);
		auto nonZeroIter = begin(nums);

		while(true) {
			zeroIter = find_if(zeroIter, end(nums), isZero);
			if(zeroIter == nums.end()) {
				break;
			}

			if(distance(zeroIter, nonZeroIter) < 0) {
				nonZeroIter = zeroIter;
			}
			nonZeroIter = find_if_not(nonZeroIter, end(nums), isZero);
			if(nonZeroIter == nums.end()) {
				break;
			}

			swap(*zeroIter, *nonZeroIter);
			advance(zeroIter, 1);
		}
	}
};
