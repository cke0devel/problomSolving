class Solution {
public:
    int numberOfSubstrings(string s) {
        array<int,3> count = {0,};
        int ans = 0;
        
        int j=0;
        for(int i=0;i<s.size();i++) {
            count[s[i]-'a'] += 1;
            
            for(; count[0]>0 && count[1]>0 && count[2]>0; j++) {
                ans += s.size() - i;
                count[s[j]-'a'] -= 1;
            }
        }
        
        return ans;
    }
};
