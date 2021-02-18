class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int check[10][10] = {{0,},};
        
        int cnt = 0;
        for(const auto &domino : dominoes) {
            auto [a,b] = minmax(domino[0], domino[1]);
            check[a][b] += 1;
            
            cnt += check[a][b]-1;
        }
        
        return cnt;
    }
};
