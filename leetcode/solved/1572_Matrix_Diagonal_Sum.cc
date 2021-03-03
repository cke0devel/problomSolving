class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        const int sz = mat.size();
        
        int sum = 0;
        
        for(int i=0; i<sz; i++) {
            sum += mat[i][i] + mat[i][sz-1-i];
        }
        if(sz%2 == 1) {
            sum -= mat[sz/2][sz/2];
        }
        
        return sum;
    }
};
