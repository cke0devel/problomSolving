class Solution {
public:
    int missingNumber(vector<int>& nums) {
        const int sum = accumulate(begin(nums), end(nums), 0);
        
        return (1+nums.size())*nums.size()/2 - sum;
    }
};
