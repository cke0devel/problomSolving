class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> freq;
        
        for(const auto n : nums) {
            freq[n] += 1;
        }
        
        vector<pair<int,int>> v(begin(freq), end(freq));
        sort(begin(v), end(v),
            [](const auto &lhs, const auto &rhs) {
                if(lhs.second == rhs.second) {
                    return lhs.first > rhs.first;
                }
                return lhs.second < rhs.second;
            });
        
        vector<int> ans;
        for(const auto e : v) {
            fill_n(back_inserter(ans), e.second, e.first);
        }
        
        return ans;
    }
};
