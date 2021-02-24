class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        
        if(strs.empty()) {
            return ans;
        }
        
        for(int p=0; p<strs[0].size(); p++) {
            bool matched = true;
            
            for(int i=1; i<strs.size(); i++) {
                if(strs[i].size() <= p || strs[i-1][p] != strs[i][p]) {
                    matched = false;
                    break;
                }
            }
            
            if(matched) {
                ans += strs[0][p];
            }
        }
        
        return ans;
    }
};
