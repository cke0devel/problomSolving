class Solution {
public:
	bool checkIfExist(vector<int>& arr) {
		sort(begin(arr), end(arr));

		auto it = begin(arr);
		for(const auto n : arr) {
			it = lower_bound(it, end(arr), n*2);
			if(it!=arr.end() && *it==n*2) {
				return true;
			}
		}

		return false;
	}
};
