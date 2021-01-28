class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> positions;
        
        for(int i=0; i<position.size(); i++) {
            positions.emplace_back(position[i], i);
        }
        sort(begin(positions), end(positions), greater<pair<int,int>>());
        
        int ans = 1;
        float t = float(target-positions[0].first) / speed[positions[0].second];
        for(int i=1; i<positions.size(); i++) {
            const pair<int,int> &p = positions[i];
            const float tt = float(target-p.first) / speed[p.second];
            
            if(t-tt < 0) {
                t = tt;
                ans += 1;
            }
        }
        
        return ans;
    }
};
