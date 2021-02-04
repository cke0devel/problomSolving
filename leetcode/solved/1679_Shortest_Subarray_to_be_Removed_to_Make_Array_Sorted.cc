class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        
        for(const auto n : nums) {
            m[n] += 1;
        }
        
        int ans = 0;
        auto it = begin(m);
        while(it != end(m) && it->first <= k/2) {
            auto other = m.find(k - it->first);
            if(other != end(m) && other->second>0) {
                other->second -= 1;
                it->second -= 1;
                
                if(it->second >= 0) {
                    ans += 1;
                }
            } else {
                ++it;
            }
        }
        
        return ans;
    }
};
