class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        
        while(n) {
            const int d = n%10;
            n /= 10;
            
            prod *= d;
            sum += d;
        }
        
        return prod-sum;
    }
};
