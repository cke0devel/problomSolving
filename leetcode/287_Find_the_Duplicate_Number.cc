class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        const int n = nums.size()-1;
        const int target = n*(1L+n)/2;
        
        return accumulate(begin(nums), end(nums), 0) - target;
    }
};
