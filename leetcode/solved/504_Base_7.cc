class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) {
            return "0";
        }
        
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
