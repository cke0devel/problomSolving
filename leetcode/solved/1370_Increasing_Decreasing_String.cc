class Solution {
public:
    string sortString(string s) {
        array<int,30> freq = {0,};
        
        for(const char c : s) {
            freq[c-'a'] += 1;
        }
        
        string ans;
        
        while(ans.size() < s.size()) {
            for(char c='a'; c<='z'; c++) {
                if(freq[c-'a']>0) {
                    ans += c;
                    freq[c-'a'] -= 1;
                }
            }
            for(char c='z'; c>='a'; c--) {
                if(freq[c-'a']>0) {
                    ans += c;
                    freq[c-'a'] -= 1;
                }
            }
        }
        
        return ans;
    }
};
