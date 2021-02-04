class Solution {
public:
    int concatenatedBinary(int n) {
        constexpr unsigned int MOD= 1000000007;
        
        unsigned long ans = 0;
        
        for(int i=1; i<=n; i++) {
            ans = ((ans<<(sizeof(int)*8) - __builtin_clz(i)) | i) % MOD;
        }
        
        return ans;
    }
};
