class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> anagrams;
        
        for(const auto &s : strs) {
            string sorted(s);
            sort(begin(sorted), end(sorted));
            anagrams[sorted].push_back(s);
        }
        
        vector<vector<string>> ans;
        for(auto &e : anagrams) {
            ans.emplace_back(e.second);
        }
        
        return ans;
    }
};
