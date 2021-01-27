class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
 
        for(int i=0; i<nums.size(); i++) {
            v.emplace_back(nums[i], i);
        }
        sort(begin(v), end(v));
        
        for(int i=1; i<v.size(); i++) {
            if(v[i].first==v[i-1].first && v[i].second-v[i-1].second <= k) {
                return true;
            }
        }

        return false;
    }
};
