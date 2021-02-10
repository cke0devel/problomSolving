class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        nums.push_back(0);
        nums.push_back(101);
        
        sort(begin(nums), end(nums));
        
        int ans = 0;
        
        for(int i=1; i<nums.size()-1; i++) {
            if(nums[i-1]!=nums[i] && nums[i]!=nums[i+1]) {
                ans += nums[i];
            }
        }
        
        return ans;
    }
};
