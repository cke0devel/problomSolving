class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        const int sz = nums.size();
        
        set<pair<int,int>> pos;
        
        for(int i=0; i<sz; i++) {
            pos.emplace(nums[i], i);
        }
        
        vector<int> ans;
        int lower = -1;
        for(auto it=cbegin(pos); k>0; ++it) {
            auto [n, i] = *it;
            
            if(lower<i) {
                if(sz-k > i) {
                    ans.push_back(n);
                    k--;
                    lower = i;
                } else if(sz-k == i) {
                    copy(begin(nums)+i, end(nums), back_inserter(ans));
                    k = 0;
                }
            }
        }
        
        return ans;
    }
};
