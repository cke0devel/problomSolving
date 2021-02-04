class Solution {
public:
    bool hasAlternatingBits(int n) {
        const unsigned long N = n;
        const unsigned long k = N ^ (N<<1);
        unsigned long p = (1UL<<((sizeof(int)*8)-__builtin_clz(N)+1)) - 1;
        
        if((N&1) == 0) {
            p -= 1;
        }
     
        return k==p;
    }
};
