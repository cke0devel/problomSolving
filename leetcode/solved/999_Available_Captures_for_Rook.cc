class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r=0, c=0;
        
        for(int i=0; i<board.size(); i++) {
            auto it = find(begin(board[i]), end(board[i]), 'R');
            if(it != end(board[i])) {
                r = i;
                c = distance(begin(board[i]), it);
                break;
            }
        }
        
        int cnt = 0;
        
        for(int row=r-1; row>=0 && board[row][c]!='B'; row--) {
            if(board[row][c]=='p') {
                cnt += 1;
                break;
            }
        }
        for(int row=r+1; row<board.size() && board[row][c]!='B'; row++) {
            if(board[row][c]=='p') {
                cnt += 1;
                break;
            }
        }
        for(int col=c-1; col>=0 && board[r][col]!='B'; col--) {
            if(board[r][col]=='p') {
                cnt += 1;
                break;
            }
        }
        for(int col=c+1; col<board[0].size() && board[r][col]!='B'; col++) {
            if(board[r][col]=='p') {
                cnt += 1;
                break;
            }
        }
        
        return cnt;
    }
};
