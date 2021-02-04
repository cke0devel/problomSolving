class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        
        int a=0, b=1;
        
        n -= 1;
        while(n--) {
            int t = a;
            a = b;
            b = t+a;
        }
        
        return b;
    }
};
