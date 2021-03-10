class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        
        auto tonum = [&](int &i, const int n, const char low, const char high) {
            if(i+1 < s.size()) {
                if(s[i+1] == low) { ans += 4*n; i+=1; }
                else if(s[i+1] == high) { ans += 9*n; i+=1; }
                else ans += n;
            } else {
                ans += n;
            }
        };
        
        for(int i=0; i<s.size(); i++) {
            switch(s[i]) {
                case 'V': ans += 5; break;
                case 'L': ans += 50; break;
                case 'D': ans += 500; break;
                    
                case 'I':
                    tonum(i, 1, 'V', 'X');
                    break;
                case 'X':
                    tonum(i, 10, 'L', 'C');
                    break;
                case 'C':
                    tonum(i, 100, 'D', 'M');
                    break;
                case 'M':
                    ans += 1000;
                    break;
            }
        }
        
        return ans;
    }
};
