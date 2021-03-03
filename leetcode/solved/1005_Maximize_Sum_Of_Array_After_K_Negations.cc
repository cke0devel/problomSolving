class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(begin(A), end(A));
        
        const bool hasZero = binary_search(begin(A), end(A), 0);
        
        for(int i=0; K>0 && i<A.size(); i++) {
            if(A[i]<0) {
                A[i] = abs(A[i]);
                K--;
            }
        }
        
        if(hasZero==false && K%2==1) {
            auto it = min_element(begin(A), end(A));
            *it = -*it;
        }
        
        return accumulate(begin(A), end(A), 0);
    }
};
