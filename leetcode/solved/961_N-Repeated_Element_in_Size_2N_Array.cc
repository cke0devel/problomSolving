class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        sort(begin(A), end(A));
        
        const size_t sz = A.size();
        
        if(A.front() == A[sz/2-1]) return A[0];
        if(A.back() == A[sz/2]) return A.back();
        
        return A[sz/2];
    }
};
