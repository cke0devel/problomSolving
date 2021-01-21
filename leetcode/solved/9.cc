class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        const long xx = x;
        long n = 0;
        while(x) {
            n = n*10 + x%10;
            x /= 10;
        }
        
        return n == xx;
    }
};
