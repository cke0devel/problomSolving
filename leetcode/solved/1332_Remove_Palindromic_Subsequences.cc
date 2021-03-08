class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.empty()) return 0;
        
        return isPalindrome(s) ? 1 : 2;
    }
    
private:
    bool isPalindrome(const string &s) {
        auto left = s.begin();
        auto right = s.end() - 1;

        while(left < right) {
            if(*left != *right) {
                return false;
            }
            advance(left, 1);
            advance(right, -1);
        }
        
        return true;
    }
};
