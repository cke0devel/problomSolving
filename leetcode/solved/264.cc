class Solution {
public:
    int nthUglyNumber(int n) {
        set<long> s = {1};
        
        long ans = 0;
        while(n--) {
            ans = *begin(s); s.erase(begin(s));

            s.insert(ans*2);
            s.insert(ans*3);
            s.insert(ans*5);
        }
        
        return ans;
    }
};
