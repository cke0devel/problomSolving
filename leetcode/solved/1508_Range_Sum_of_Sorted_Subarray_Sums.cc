class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        partial_sum(begin(nums), end(nums), begin(nums));
        
        vector<int> sums(begin(nums), end(nums));
        auto inserter = back_inserter(sums);
        for(int i=1; i<n; i++) {
            for(int j=i; j<n; j++) {
                inserter = nums[j] - nums[i-1];
            }
        }
        
        sort(begin(sums), end(sums));
        
        return accumulate(begin(sums)+left-1, begin(sums)+right, 0,
                         [](const int lhs, const int rhs) {
                             return (lhs+rhs) % 1'000'000'007;
                         });
    }
};
