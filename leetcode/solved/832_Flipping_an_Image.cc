class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto &row : A) {
            reverse(begin(row), end(row));
            transform(begin(row), end(row), begin(row),
                      [](const int n) { return !n; });
        }
        
        return A;
    }
};
