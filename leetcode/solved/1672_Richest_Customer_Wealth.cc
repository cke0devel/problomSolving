class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        
        for(const auto &account : accounts) {
            ans = max(ans, accumulate(begin(account), end(account), 0));
        }
        
        return ans;
    }
};
