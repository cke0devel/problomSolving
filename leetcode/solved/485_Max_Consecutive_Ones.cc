class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0;
        
        int cnt = 0;
        for(const int n : nums) {
            if(n == 0) {
                ones = max(ones, cnt);
                cnt = 0;
            } else {
                cnt += 1;
            }
        }
        
        return max(ones, cnt);
    }
};
