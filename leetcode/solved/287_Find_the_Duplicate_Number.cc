class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(begin(nums), end(nums));
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1] == nums[i]) {
                return nums[i];
            }
        }
        
        return nums.front();
    }
};
