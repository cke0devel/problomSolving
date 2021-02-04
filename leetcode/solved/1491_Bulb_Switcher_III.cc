class Solution {
public:
    double average(vector<int>& salary) {
        int low = 1000000;
        int high = 1000;
        
        int total = 0;
        for(const auto n : salary) {
            total += n;
            low = min(low, n);
            high = max(high, n);
        }
        
        return (total-low-high) / (salary.size()-2.);
    }
};
