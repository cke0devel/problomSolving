class Solution {
public:
	string frequencySort(string s) {
		unordered_map<char,int> freq;

		for(const auto ch : s) {
			freq[ch] += 1;
		}

		multimap<int,char> freq_reverse;
		for(const auto e : freq) {
			freq_reverse.insert({e.second, e.first});
		}

		string ans;
		for_each(rbegin(freq_reverse), rend(freq_reverse),
				[&ans](const auto e){ ans += string(e.first, e.second);});

		return ans;
	}
};
