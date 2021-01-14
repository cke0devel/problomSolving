class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		vector<int> accu = {0};

		for(const auto n : nums) {
			accu.push_back(accu.back() + n);
		}

		int cnt = 0;
		for(int i=0; i<accu.size(); i++) {
			for(int j=i+1; j<accu.size(); j++) {
				if(accu[j] - accu[i] == k) {
					cnt += 1;
				}
			}
		}

		return cnt;
	}
};
