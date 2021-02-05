class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        char board[8][8] = {{0,},};
        
        for(const auto &p : queens) {
            board[p[0]][p[1]] = 'Q';
        }
        
        board[king[0]][king[1]] = 'K';
        
        vector<vector<int>> ans;
        const pair<int,int> dir[] = {
            {-1,-1}, {-1,0}, {-1,1}, {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}  
        };
        
        for(const auto &d : dir) {
            int y = king[0];
            int x = king[1];
            
            while(0<=y && y<8 && 0<=x && x<8) {
                if(board[y][x] == 'Q') {
                    ans.emplace_back(vector<int>({y,x}));
                    break;
                }
                y += d.first;
                x += d.second;
            }
        }
        
        return ans;
    }
};
