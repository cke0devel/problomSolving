class Solution {
public:
    int maxScore(string s) {
        vector<int> zeros(s.size()-1);
        vector<int> ones(s.size()-1);

        zeros[0] = (s[0]=='0') ? 1 : 0;
        ones[s.size()-2] = s.back()-'0';
        for(int i=1; i<zeros.size(); i++) {
            zeros[i] = zeros[i-1] + ((s[i]=='0') ? 1 : 0);
            ones[s.size()-i-2] = ones[s.size()-i-1] + (s[s.size()-i-1]-'0');
        }
        
        int ans = 0;
        for(int i=0; i<zeros.size(); i++) {
            ans = max(ans, zeros[i]+ones[i]);
        }
        
        return ans;
    }
};
