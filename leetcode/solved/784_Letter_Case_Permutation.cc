class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        for(auto &c : S) {
            c = tolower(c);
        }
        
        vector<string> ans = {S};
        
        toupper(S, 0, back_inserter(ans));

        return ans;
    }
    
private:
    void toupper(string &s, const int p, back_insert_iterator<vector<string>> inserter) {
        if(p>=s.size()) return;
        
        if(islower(s[p])) {
            s[p] = std::toupper(s[p]);
            inserter = s;
            toupper(s, p+1, inserter);
            s[p] = std::tolower(s[p]);
        }
        toupper(s, p+1, inserter);
    }
};
