class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    cnt += 1;
                    fill(grid, i, j);
                }
            }
        }
        
        return cnt;
    }
    
private:
    void fill(vector<vector<char>> &grid, const int y, const int x) {
        if(y<0 || x<0 || y>=grid.size() || x>=grid[0].size()) {
            return;
        }
        if(grid[y][x] == '0') {
            return;
        }
        
        grid[y][x] = '0';
        fill(grid, y-1, x);
        fill(grid, y+1, x);
        fill(grid, y  , x-1);
        fill(grid, y  , x+1);
    }
};
