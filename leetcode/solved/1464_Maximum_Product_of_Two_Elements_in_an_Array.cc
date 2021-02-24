class Solution {
public:
    int maxProduct(vector<int>& nums) {
        transform(begin(nums), end(nums), begin(nums),
                 [](const int n) { return n-1; });
        
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                ans = max(ans, nums[i]*nums[j]);
            }
        }
        
        return ans;
    }
};
