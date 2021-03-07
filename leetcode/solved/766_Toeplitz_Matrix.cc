class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=matrix.size()-2; i>=0; i--) {
            int y=i, x=0;
            
            while(y+1<matrix.size() && x+1<matrix[0].size()) {
                if(matrix[y][x] != matrix[y+1][x+1]) {
                    return false;
                }
                x+=1; y+=1;
            }
        }
        for(int i=1; i<matrix[0].size(); i++) {
            int y=0, x=i;
            
            while(y+1<matrix.size() && x+1<matrix[0].size()) {
                if(matrix[y][x] != matrix[y+1][x+1]) {
                    return false;
                }
                x+=1; y+=1;
            }
        }
        
        return true;
    }
};
