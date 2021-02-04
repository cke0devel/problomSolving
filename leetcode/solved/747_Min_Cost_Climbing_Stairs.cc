class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size() <= 1) {
            return 0;
        }
        
        int first = nums[0]>=nums[1] ? 0 : 1;
        int second = nums[0]>=nums[1] ? 1 : 0;

        for(int i=2; i<nums.size(); i++) {
            if(nums[i] > nums[first]) {
                second = first;
                first = i;
            } else if(nums[i] > nums[second]) {
                second = i;
            }
        }
        
        if(nums[second]*2 > nums[first]) {
            return -1;
        }
        
        return first;
    }
};
