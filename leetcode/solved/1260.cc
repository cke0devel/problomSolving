class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const int l = grid.size() * grid[0].size();
        const int width = grid[0].size();
        
        k %= l;
        
        const int n = grid[0][0];
        
        vector<int> round;
        for(int i=l-k; i<l; i++) {
            const int row = i/width;
            const int col = i%width;
            round.push_back(grid[row][col]);
        }
        
        for(int i=l-1,j=l-k-1; i>=k; i--,j--) {
            const int old_row = j/width;
            const int old_col = j%width;
            
            const int row = i/width;
            const int col = i%width;
            
            grid[row][col] = grid[old_row][old_col];
        }
        for(int i=0;i<k;i++) {
            const int row = i/width;
            const int col = i%width;
            
            grid[row][col] = round[i];
        }
        
        return grid;
    }
};
