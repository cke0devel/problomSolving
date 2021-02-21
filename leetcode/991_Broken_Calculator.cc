class Solution {
public:
    int brokenCalc(int X, int Y) {
        set<long> s = {X};
        deque<pair<long, int>> q = {pair(X,0)};
        
        long ans = 1000000000;
        while(!q.empty()) {
            const auto [n,op] = q.front(); q.pop_front();

            if(op >= ans) {
                continue;
            }
            
            if(n > Y) {
                ans = min(ans, op + (n-Y));
            } else if(n == Y) {
                ans = op;
                break;
            } else {
                if(s.insert(n*2).second) {
                    q.emplace_back(n*2, op+1);
                }
                if(s.insert(n-1).second) {
                    q.emplace_back(n-1, op+1);
                }
            }
        }
        
        return ans;
    }
};
