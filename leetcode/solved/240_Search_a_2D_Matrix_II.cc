class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(const auto &row : matrix) {
            if(row.front() > target) break;
            if(row.back() < target) continue;
            
            if(binary_search(begin(row), end(row), target)) {
                return true;
            }
        }
        
        return false;
    }
};
