class Solution {
public:
    int maxScore(string s) {
        vector<int> zeros(s.size());
        vector<int> ones(s.size());

        zeros[0] = (s[0]=='0') ? 1 : 0;
        ones.back() = s.back()-'0';
        for(int i=1; i<zeros.size(); i++) {
            zeros[i] = zeros[i-1] + ((s[i]=='0') ? 1 : 0);
            ones[s.size()-i-1] = ones[s.size()-i] + (s[s.size()-i-1]-'0');
        }
        
        int ans = 0;
        for(int i=1; i<s.size()-1; i++) {
            ans = max(ans, zeros[i]+ones[i]);
        }
        
        return ans;
    }
};
