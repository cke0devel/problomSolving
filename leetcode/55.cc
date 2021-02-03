class Solution {
public:
    bool canJump(vector<int>& nums) {
        deque<int> p;
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                p.push_back(i);
            }
        }
        
        for(int i=0; i<nums.size(); i++) {
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
