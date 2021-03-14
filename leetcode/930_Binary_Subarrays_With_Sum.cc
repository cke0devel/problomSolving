class Solution {
public:
    int numSubarraysWithSum(vector<int>& A, int S) {
        int sum = 0;
        int cnt = 0;
        
        int j=0;
        for(int i=0; i<A.size(); i++) {
            for(;sum>S && j<=i; j++) {
                sum -= A[j];
                if(sum == S) {
                    cnt++;
                }
            }
            
            sum += A[i];
            if(sum == S) {
                cnt++;
            }
        }
        while(sum>=S && j<A.size()) {
            sum -= A[j];
            j++;
            if(sum == S) {
                cnt++;
            }
        }
        
        return cnt;
    }
};
