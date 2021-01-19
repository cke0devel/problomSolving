class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        const string p = normalize(pattern);
        
        vector<string> ans;

        for(const auto &s : words) {
            if(normalize(s) == p) {
                ans.emplace_back(s);
            }
        }
        
        return ans;
    }
    
private:
    string normalize(const string &s) {
        string ret;
        
        char alpha = 'a';
        map<char,char> m;
        
        for(const auto c : s) {
            auto it = m.find(c);
            
            if(it == m.end()) {
                m[c] = alpha;
                ret += alpha;
                alpha++;
            } else {
                ret += it->second;
            }
        }
        
        return ret;
    }
};
