class Solution {
public:
    int trailingZeroes(int n) {
        int five = 0;
        
        for(int i=2; i<=n; i++) {
            for(int k=i; k%5==0 && k>0; k/=5) five += 1;
        }
        
        return five;
    }
};
