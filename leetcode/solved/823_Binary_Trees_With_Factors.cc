class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        constexpr int mod = 1'000'000'007;
        sort(begin(arr), end(arr));
        
        vector<long> dp(arr.size());
        fill(begin(dp), end(dp), 1);
        
        for(int i=0; i<arr.size(); i++) {
            for(int j=0; j<i; j++) {
                if(arr[i] % arr[j] != 0) continue;
                
                const int other = arr[i]/arr[j];
                auto it = lower_bound(begin(arr), begin(arr)+i, other);
                if(it==end(arr) || *it != other) continue;
                
                const int index = distance(begin(arr), it);
                
                dp[i] = (dp[i] + ((dp[j] * dp[index]) % mod)) % mod;
            }
        }
        
        return accumulate(begin(dp), end(dp), 0L) % mod;
    }
};
