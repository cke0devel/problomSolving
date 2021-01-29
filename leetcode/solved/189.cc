class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        std::rotate(begin(nums), begin(nums)+(nums.size()-k), end(nums));
    }
};
