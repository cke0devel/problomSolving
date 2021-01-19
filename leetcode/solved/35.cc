class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(begin(nums), end(nums), target);
        
        return distance(begin(nums), it);
    }
};
