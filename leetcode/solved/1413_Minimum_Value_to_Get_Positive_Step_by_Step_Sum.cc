class Solution {
public:
    int minStartValue(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), begin(nums));
        
        const int n = *min_element(begin(nums), end(nums));
        if(n>0) return 1;
        
        return abs(n-1);
    }
};
