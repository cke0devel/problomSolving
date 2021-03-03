class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr), end(arr),
             [](const int a, const int b) {
                 const int one_a = __builtin_popcount(a);
                 const int one_b = __builtin_popcount(b);
                 
                 if(one_a==one_b) return a < b;
                 return one_a < one_b;
             });
        
        return arr;
    }
};
