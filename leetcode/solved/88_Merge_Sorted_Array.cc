class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        copy(begin(nums2), end(nums2), begin(nums1)+m);
        sort(begin(nums1), end(nums1));
    }
};
