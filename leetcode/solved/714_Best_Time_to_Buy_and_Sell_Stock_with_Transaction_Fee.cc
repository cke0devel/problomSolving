class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int empty=0, have=-prices[0];
        
        for(const auto p : prices) {
            empty = max(empty, have + p - fee);
            have = max(have, empty - p);
        }
        
        return empty;
    }
};
