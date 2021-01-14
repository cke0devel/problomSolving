class Solution {
public:
	bool checkIfExist(vector<int>& arr) {
		sort(begin(arr), end(arr));

		int zeroCnt = 0;
		for(const auto n : arr) {
			if(n == 0) {
				zeroCnt += 1;
				if(zeroCnt > 1) return true;
			}
			else if(binary_search(begin(arr), end(arr), n*2)) {
				return true;
			}
		}

		return false;
	}
};
