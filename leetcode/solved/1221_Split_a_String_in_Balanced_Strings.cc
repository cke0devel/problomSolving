class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int R=0, L=0;
        
        for(const char c : s) {
            if(c == 'R') R++;
            else if(c == 'L') L++;
            
            if(R==L) ans++;
        }
        
        return ans;
    }
};
