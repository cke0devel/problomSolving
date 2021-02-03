class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size() == 1) {
            return true;
        }
        
        if(A[0] < A.back()) {
            for(int i=1; i<A.size(); i++) {
                if(A[i-1] > A[i]) return false;
            }
        } else {
            for(int i=1; i<A.size(); i++) {
                if(A[i-1] < A[i]) return false;
            }
        }
        
        return true;
    }
};
