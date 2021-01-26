class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        const int H = heights.size();
        const int W = heights[0].size();
        
        vector<vector<int>> effort(H);
        
        for(int i=0; i<H; i++) {
            effort[i].resize(W);
            fill(begin(effort[i]), end(effort[i]), 1000);
        }
        
        effort[0][0] = 0;
        multimap<int, pair<int,int>> m = {{0,{0,0}}};
        array<pair<int,int>, 4> dirs = {pair(1,0), pair(-1,0), pair(0,1), pair(0,-1)};
        while(!m.empty()) {
            auto it = begin(m);
            const auto [e, p] = *it;
            m.erase(it);
            
            const auto [y, x] = p;
            for(const auto &dir : dirs) {
                const int new_y = y + dir.first;
                const int new_x = x + dir.second;
                
                if(0<=new_y && new_y<H && 0<=new_x && new_x<W) {
                    const auto new_e = max(e, abs(heights[y][x]-heights[new_y][new_x]));
                    if(effort[new_y][new_x] > new_e) {
                        effort[new_y][new_x] = new_e;
                        m.emplace(new_e, pair(new_y,new_x));
                    }
                }
            }
        }
        
        return effort[H-1][W-1];
    }
};
