class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        char c = 0;
        int start = 0;
        
        s += '0';
        
        vector<vector<int>> ans;
        for(int i=0;i<s.size();i++) {
            if(c != s[i]) {
                if(i - start >= 3) {
                    ans.emplace_back(vector({start, i-1}));
                }
                c = s[i];
                start = i;
            }
        }
        
        return ans;
    }
};
