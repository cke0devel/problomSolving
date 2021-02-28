class Solution {
public:
    int maximum69Number (int num) {
        int p = -1;
        
        for(int n=num, i=0; n>0; n/=10,i++) {
            if(n%10 == 6) {
                p = i;
            }
        }
        
        if(p>=0) {
            int k = 3;
            for(int i=1;i<=p;i++) {
                k *= 10;
            }
            num += k;
        }
        
        return num;
    }
};
