class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<pair<long,long>> s;
        
        for(auto n : nums) {
            const int orig = n;
            
            if(n%2 == 1) {
                s.emplace(orig, orig*2);
            } else {
                while((n&0x1) == 0) n>>=1;
                s.emplace(n, orig);
            }
        }
        
        int ans = 1000000000;
        for(;;) {
            const int deviation = rbegin(s)->first - begin(s)->first;
            
            ans = min(ans, deviation);
            auto [a,b] = *begin(s);
            if(a*2 > b) {
                break;
            }
            
            s.erase(begin(s));
            s.emplace(a*2, b);
        }
        
        return ans;
    }
};
