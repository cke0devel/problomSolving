class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.size());
        
        fill(begin(ans), end(ans), s.size());
        
        int pos = 0;
        
        pos = s.size()-1;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == c) {
                pos = i;
                ans[i] = 0;
            } else {
                ans[i] = min(ans[i], abs(pos-i));
            }
        }
        
        pos = 0;
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] == c) {
                pos = i;
                ans[i] = 0;
            } else {
                ans[i] = min(ans[i], abs(pos-i));
            }
        }
        
        return ans;
    }
};
