class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> row(matrix.size());
        vector<bool> col(matrix.size());
        
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0;j<matrix[0].size(); j++) {
                if(matrix[i][j] != 0) {
                    continue;
                }
                
                row[i] = true;
                col[j] = true;
            }
        }
        
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0;j<matrix[0].size(); j++) {
                if(row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
