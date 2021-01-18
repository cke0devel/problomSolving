class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) {
            return false;
        }
        
        long k = 1;
        
        int n = 2;
        for(; n*n<num; n++) {
            if(num%n == 0) {
                k += n;
                k += num/n;
                
                if(k>num) {
                    return false;
                }
            }
        }
        if(n*n == num) {
            k += n;
        }
        
        return k==num;
    }
};
