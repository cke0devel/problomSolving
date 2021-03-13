class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0;j<matrix.size(); j++) {
                if(matrix[i][j] != 0) {
                    continue;
                }
                
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
        
        for(int i=1; i<matrix.size(); i++) {
            if(matrix[i][0]==0) {
                fill(begin(matrix[i]), end(matrix[i]), 0);
            }
        }
        for(int i=0; i<matrix[0].size(); i++) {
            if(matrix[0][i]==0) {
                for(int j=0; j<matrix.size(); j++) {
                    matrix[j][i] = 0;
                }
            }
        }
        
        if(matrix[0][0] == 0) {
            fill(begin(matrix[0]), end(matrix[0]), 0);
        }
    }
};
