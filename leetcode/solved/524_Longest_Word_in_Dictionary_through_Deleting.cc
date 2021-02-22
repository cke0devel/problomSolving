class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(begin(d), end(d));
        
        string ans;
        
        for(const auto word : d) {
            auto it = cbegin(s);
            bool matched = true;
            
            for(const auto c : word) {
                it = find(it, cend(s), c);
                if(it == cend(s)) {
                    matched = false;
                    break;
                }
                
                ++it;
            }
            
            if(matched && ans.size() < word.size()) {
                ans = word;
            }
        }
        
        return ans;
    }
};
