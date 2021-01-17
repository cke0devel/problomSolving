class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0) {
            return;
        }
        if(m==0) {
            copy(begin(nums2), end(nums2), begin(nums1));
            return;
        }
        
        int cur = m+n - 1;
        m -= 1;
        n -= 1;
        while(m>=0 && n>=0) {
            if(nums1[m] >= nums2[n]) {
                nums1[cur] = nums1[m];
                m--;
            } else {
                nums1[cur] = nums2[n];
                n--;
            }
            cur -= 1;
        }
        
        if(n>=0) {
            copy(begin(nums2), begin(nums2)+n+1, begin(nums1));
        }
    }
};
