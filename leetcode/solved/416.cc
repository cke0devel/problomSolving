class Solution {
public:
    bool canPartition(vector<int>& nums) {
        const int total = accumulate(begin(nums), end(nums), 0);
        if(total%2 == 1) {
            return false;
        }
        
        const int target = total/2;
        bitset<10001> flags;
        
        flags.set(0);
        for(const auto n : nums) {
            for(int i=target-1; i>=0; i--) {
                if(flags[i]) {
                    if(i+n == target) {
                        return true;
                    }
                    
                    flags.set(i+n);
                }
            }
        }
        
        return false;
    }
};
