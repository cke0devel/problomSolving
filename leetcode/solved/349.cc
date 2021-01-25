class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        
        vector<int> ans;
        set_intersection(begin(nums1), end(nums1),
                         begin(nums2), end(nums2),
                         back_inserter(ans));
        ans.erase(unique(begin(ans), end(ans)), end(ans));
        
        return ans;
    }
};
