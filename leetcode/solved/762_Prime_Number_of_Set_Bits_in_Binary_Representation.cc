class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        const vector<int> primes = {2,3,5,7,11,13,17,19};
        
        int ans = 0;
        for(int i=L; i<=R; i++) {
            const int bits = __builtin_popcount(i);
            
            if(binary_search(begin(primes), end(primes), bits)) {
                ans += 1;
            }
        }
        
        return ans;
    }
};
