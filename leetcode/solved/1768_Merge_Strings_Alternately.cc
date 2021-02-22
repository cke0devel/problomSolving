class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        const int last = min(word1.size(), word2.size());
        
        string ans;
        for(int i=0; i<last; i++) {
            ans += word1[i];
            ans += word2[i];
        }
        
        if(word1.size() > word2.size()) {
            ans += word1.substr(last);
        } else {
            ans += word2.substr(last);
        }
        
        return ans;
    }
};
