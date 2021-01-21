class Solution {
public:
    int reverse(int x) {
        constexpr int lower = numeric_limits<int>::min();
        constexpr int upper = numeric_limits<int>::max();
        
        int ans = 0;
        
        for(int i=0; x; i++) {
            if(upper/10 < ans || (upper/10==ans && upper%10 < x%10)) {
                return 0;
            }
            if(lower/10 > ans || (lower/10==ans && lower%10 > x%10)) {
                return 0;
            }
               
            ans = ans*10 + x%10;
            x/=10;
        }
        
        return ans;
    }
};
