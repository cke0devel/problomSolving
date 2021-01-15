class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>> sweep(trips.size()*2);
        
        for(const auto &info : trips) {
            sweep.emplace_back(info[1], info[0]);
            sweep.emplace_back(info[2], -info[0]);
        }
        sort(begin(sweep), end(sweep));
        
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
