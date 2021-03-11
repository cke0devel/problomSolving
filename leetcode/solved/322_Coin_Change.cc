class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        constexpr unsigned int inf = ~0U;
        array<unsigned int, 10001> ans;
        
        fill(begin(ans), end(ans), inf);
        ans[0] = 0;
        
        for(const int coin : coins) {
            for(int i=0; i<=amount; i++) {
                if(ans[i] == inf) continue;
                if(i+coin > amount) break;
                
                ans[i+coin] = min(ans[i+coin], ans[i]+1);
            }
        }
        
        return ans[amount];
    }
};
