class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans = {first};
        
        transform(begin(encoded), end(encoded), back_inserter(ans),
                 [&ans](const int n) {
                     return ans.back() ^ n;
                 });

        return ans;
    }
};
