class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0) return "0";
        
        string ans;
        
        for(int i=0; n>0; i++) {
            if(i>0 && i%3==0) ans += '.';
            ans += '0' + (n%10);
            n /= 10;
        }
        
        reverse(begin(ans), end(ans));
        
        return ans;
    }
};
