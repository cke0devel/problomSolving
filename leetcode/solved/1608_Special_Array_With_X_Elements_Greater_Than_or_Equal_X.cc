class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(begin(nums), end(nums));
        
        int x = nums.size();
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] >= x && (i==0 || nums[i-1] < x)) {
                return x;
            }
            
            x -= 1;
        }
        
        return -1;
    }
};
