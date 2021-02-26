class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        transform(begin(nums), end(nums), begin(nums),
                 [](const int n) { return n*n; });
        sort(begin(nums), end(nums));
        
        return nums;
    }
};
