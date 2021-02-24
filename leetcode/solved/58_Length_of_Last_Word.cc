class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        
        int p = s.find_last_not_of(' ');
        if(p == string::npos) {
            return 0;
        }
        
        while(p>=0 && s[p]!=' ') {
            ans += 1;
            p -= 1;
        }
        
        return ans;
    }
};
