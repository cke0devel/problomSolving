class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(begin(nums), end(nums));

        int repetition = -1;
        int loss = -1;
        
        if(nums[0] != 1) loss = 1;
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1] == nums[i]) repetition = nums[i];
            if(nums[i]-nums[i-1] > 1) loss = nums[i]-1;
            
            if(repetition>0 && loss>0) {
                break;
            }
        }
        
        if(loss == -1) {
            loss = nums.size();
        }
        
        return {repetition, loss};
    }
};
