class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cnt[30] = {0,};
        
        for(const char c : text) {
            cnt[c-'a'] += 1;
        }
        
        int ans = text.size();
        
        ans = min(ans, cnt['b'-'a']);
        ans = min(ans, cnt['a'-'a']);
        ans = min(ans, cnt['l'-'a']/2);
        ans = min(ans, cnt['o'-'a']/2);
        ans = min(ans, cnt['n'-'a']);

        return ans;
    }
};
