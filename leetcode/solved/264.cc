class Solution {
public:
    int nthUglyNumber(int n) {
        set<long> s = {1};
        priority_queue<long, std::vector<long>, std::greater<long>> q;
        q.push(1);
        
        long ans = 0;
        while(n--) {
            ans = q.top(); q.pop();

            if(s.insert(ans*2).second) q.push(ans*2);
            if(s.insert(ans*3).second) q.push(ans*3);
            if(s.insert(ans*5).second) q.push(ans*5);
        }
        
        return ans;
    }
};
