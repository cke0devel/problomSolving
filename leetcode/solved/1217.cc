class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        int even = 0;
        
        for(const auto p : position) {
            if(p%2 == 0) {
                even += 1;
            } else {
                odd += 1;
            }
        }
        
        return min(odd, even);
    }
};
