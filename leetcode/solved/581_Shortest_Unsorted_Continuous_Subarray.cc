class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> n = nums;
        sort(begin(n), end(n));
        
        int start = nums.size(), end = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != n[i]) {
                start = i;
                break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--) {
            if(nums[i] != n[i]) {
                end = i;
                break;
            }
        }
        
        if(end == 0) return 0;
        return end-start+1;
    }
};
