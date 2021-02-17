class Solution {
public:
    int findNumbers(vector<int>& nums) {
        return count_if(begin(nums), end(nums),
                       [](const int n) {
                           return (10<=n && n<100) || (1000<=n && n<10000) || (n==100000);
                       });
    }
};
