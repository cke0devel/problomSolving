class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while(x) {
            ans = ans*10 + x%10;
            x/=10;
        }
        
        return ans;
    }
};
