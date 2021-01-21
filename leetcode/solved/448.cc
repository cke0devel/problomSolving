class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int p = 0;
        
        while(p < nums.size()) {
            if(nums[p] != p+1) {
                swap(nums[p], nums[nums[p]-1]);
                
                if(nums[p] == nums[nums[p]-1]) {
                    p += 1;
                }
            } else {
                p += 1;
            }
        }
        
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != i+1) {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
