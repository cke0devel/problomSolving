class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> in(N+1);
        vector<int> out(N+1);
        
        for(const auto &info : trust) {
            out[info[0]] += 1;
            in[info[1]] += 1;
        }
        
        for(int i=1; i<=N; i++) {
            if(out[i]==0 && in[i]==N-1) {
                return i;
            }
        }
        
        return -1;
    }
};
