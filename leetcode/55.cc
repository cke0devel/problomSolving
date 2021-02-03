class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool> v(nums.size());
        v[0] = true;
        
        for(int i=0; i<nums.size(); i++) {
            if(v[i] == false) continue;
            
            for(int j=1; j<=nums[i]; j++) {
                if(i+j >= nums.size()) break;
                
                v[i+j] = true;
            }
        }
        
        return v.back();
    }
};
