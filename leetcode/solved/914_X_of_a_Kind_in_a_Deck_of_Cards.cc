class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int> m;
        
        for(const int card : deck) {
            m[card] += 1;
        }
        
        int ans = m.begin()->second;
        
        for(const auto &e : m) {
            ans = gcd(ans, e.second);
        }
        
        return ans >= 2;
    }
};
