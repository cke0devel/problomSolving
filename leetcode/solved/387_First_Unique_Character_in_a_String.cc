class Solution {
public:
	int firstUniqChar(string s) {
		array<int,30> count = {0,};

		for(const auto ch : s) {
			count[ch-'a'] += 1;
		}

		for(int i=0; i<s.size(); i++) {
			if(count[s[i]-'a'] == 1) {
				return i;
			}
		}
		return -1;
	}
};
