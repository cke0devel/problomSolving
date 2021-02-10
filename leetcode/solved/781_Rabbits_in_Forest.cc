class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int> c;
        
        for(const auto n : answers) {
            c[n] += 1;
        }
        
        int ans = 0;
        for(const auto &e : c) {
            const int group = (e.second + e.first) / (e.first+1);
            
            ans += group * (e.first+1);
        }
        
        return ans;
    }
};
