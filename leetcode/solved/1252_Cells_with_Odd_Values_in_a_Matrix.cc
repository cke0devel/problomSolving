class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int row[50] = {0,};
        int col[50] = {0,};
        
        for(const auto &index : indices) {
            row[index[0]] += 1;
            col[index[1]] += 1;
        }
        
        int odd = 0;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                odd += (row[i]+col[j]) % 2;
            }
        }
        
        return odd;
    }
};
