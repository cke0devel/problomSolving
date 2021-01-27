class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = lower_bound(begin(nums), end(nums), target);
        
        if(it==end(nums) || *it != target) {
            return -1;
        }
        
        return distance(begin(nums), it);
    }
};
