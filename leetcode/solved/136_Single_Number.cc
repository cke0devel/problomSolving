class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(begin(nums), end(nums));
        
        for(int i=1; i<nums.size(); i+=2) {
            if(nums[i-1] != nums[i]) {
                return nums[i-1];
            }
        }
        
        return nums.back();
    }
};
