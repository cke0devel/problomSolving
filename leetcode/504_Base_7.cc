class Solution {
public:
    string convertToBase7(int num) {
        const bool sign = (num>=0);
        num = abs(num);
        
        string ans;
        
        while(num) {
            ans += '0' + (num%7);
            num /= 7;
        }
        
        reverse(begin(ans), end(ans));
        if(!sign) ans = '-' + ans;
        
        return ans;
    }
};
