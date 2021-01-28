class Solution {
public:
    int minFlipsMonoIncr(string S) {
        vector<int> accu;
        int sum = 0;

        for(const char c : S) {
            sum += c-'0';
            accu.push_back(sum);
        }
        
        const int sz = S.size();
        int ans = sz - accu.back();
        for(int i=0; i<sz; i++) {
            ans = min(ans, accu[i] + sz-(i+1) - (accu.back()-accu[i]));
        }
        
        return ans;
    }
};
