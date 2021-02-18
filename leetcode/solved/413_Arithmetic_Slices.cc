class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size() < 3) return 0;
        
        int diff = A[1] - A[0];
        int start = 0;
        int end = 1;
        
        int ans = 0;
        
        for(int i=2; i<A.size(); i++) {
            const int localDiff = A[i] - A[i-1];
            
            if(localDiff == diff) {
                end = i;
            } else {
                const int n = end-start+1;
                if(n >= 3) {
                    ans += (1 + (n-2))*(n-2) / 2;
                }
                
                diff = localDiff;
                start = i-1;
                end = i;
            }
        }
        const int n = end-start+1;
        if(n >= 3) {
            ans += (1 + (n-2))*(n-2) / 2;
        }
        
        return ans;
    }
};
