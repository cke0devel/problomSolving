class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        deque<tuple<int,int,int>> q = {tuple{0, -1, -1}};
        
        const int H = grid.size();
        const int W = grid[0].size();
        
        const pair<int,int> dir[] = {
            {-1,0}, {-1,1}, {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}, {-1,-1}
        };
        
        while(!q.empty()) {
            const auto state = q.front(); q.pop_front();
            const auto [step, y, x]  = state;
            
            if(y==H-1 && x==W-1) {
                return step;
            }
            
            for(int i=0; i<8; i++) {
                const int ny = y + dir[i].first;
                const int nx = x + dir[i].second;
                
                if(0<=ny && ny<H && 0<=nx && nx<W && grid[ny][nx]==0) {
                    q.emplace_back(step+1, ny, nx);
                    grid[ny][nx] = 1;
                }
            }
        }
        
        return -1;
    }
};
