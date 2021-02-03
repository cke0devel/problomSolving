class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) {
            return true;
        }
        
        deque<int> p;
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                p.push_back(i);
            }
        }
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) continue;
            
            if(i+nums[i]+1 >= nums.size()) {
                return true;
            }
            
            while(!p.empty()) {
                if(i + nums[i]-1 < p.front()) {
                    break;
                }
                if(i >= p.front()) {
                    return false;
                }
                
                p.pop_front();
            }
        }
        
        return p.empty();
    }
};
