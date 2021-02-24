class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(begin(nums), end(nums), greater<int>());
        const auto it = unique(begin(nums), end(nums));
        
        return distance(begin(nums), it) < 3 ? nums[0] : nums[2];
    }
};
