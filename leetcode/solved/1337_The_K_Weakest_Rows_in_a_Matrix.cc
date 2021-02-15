class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> w;

        for(int i=0; i<mat.size(); i++) {
            const auto &row = mat[i];
            auto it = upper_bound(begin(row), end(row), 1, greater<int>());
            w.emplace_back(distance(begin(row), it), i);
        }
        
        sort(begin(w), end(w));
        
        vector<int> ans;
        transform(begin(w), begin(w)+k, back_inserter(ans),
                  [](const auto &e) {
                      return e.second;
                  });
        
        return ans;
    }
};
