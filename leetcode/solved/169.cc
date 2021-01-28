class Solution {
public:
    int majorityElement(vector<int>& nums) {
        auto it = begin(nums) + nums.size()/2;
        nth_element(begin(nums), it, end(nums));
        
        return *it;
    }
};
