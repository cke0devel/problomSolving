class Solution {
public:
    bool isPalindrome(string s) {
        string k;
        
        for(const char c : s) {
            if(isalpha(c)) {
                k += tolower(c);
            }
        }
        
        string r(k);
        reverse(begin(r), end(r));
        return k == r;
    }
};
