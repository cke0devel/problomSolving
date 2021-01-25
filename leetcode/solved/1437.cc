class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int dist = k;
        
        for(const auto n : nums) {
            if(n == 1) {
                if(dist < k) {
                    return false;
                }
                dist = 0;
            } else {
                dist += 1;
            }
        }
        
        return true;
    }
};
