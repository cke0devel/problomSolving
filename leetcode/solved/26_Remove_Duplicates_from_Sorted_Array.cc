class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return distance(begin(nums),
                       unique(begin(nums), end(nums)));
    }
};
