class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        set<pair<int,int>> sweep;
        
        for(const auto &info : trips) {
            sweep.emplace(info[1], info[0]);
            sweep.emplace(info[2], -info[0]);
        }
        
        int num = 0;
        for(const auto &e : sweep) {
            num += e.second;
            if(num > capacity) {
                return false;
            }
        }
        
        return true;
    }
};
