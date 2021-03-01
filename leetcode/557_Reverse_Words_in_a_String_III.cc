class Solution {
public:
    string reverseWords(string s) {
        istringstream sin(s);
        
        string ans, t;
        while(sin >> t) {
            reverse(begin(t), end(t));
            ans += ' ' + t;
        }
        
        return ans.substr(1);
    }
};
