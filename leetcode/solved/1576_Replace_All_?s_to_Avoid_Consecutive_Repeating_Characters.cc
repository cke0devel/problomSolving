class Solution {
public:
    string modifyString(string s) {
        if(s[0] == '?') {
            if(s.size() > 1 && s[1]=='a') {
                s[0] = 'b';
            } else {
                s[0] = 'a';
            }
        }
        
        for(int i=1; i<s.size()-1; i++) {
            if(s[i] != '?') continue;
            
            for(char c='a'; c<='z'; c++) {
                if(s[i-1]!=c && c!=s[i+1]) {
                    s[i] = c;
                    break;
                }
            }
        }
        if(s.back()=='?') {
            if(s[s.size()-2] == 'a') s.back() = 'b';
            else s.back() = 'a';
        }
        
        return s;
    }
};
