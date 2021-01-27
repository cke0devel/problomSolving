class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>> m;
        
        for(int i=0; i<nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        
        for(const auto &e : m) {
            for(int i=1; i<e.second.size(); i++) {
                if(e.second[i] - e.second[i-1] <= k) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
