class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        std::rotate(begin(nums), begin(nums)+(nums.size()-k), end(nums));
    }
};
