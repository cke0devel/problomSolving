class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> trans(matrix[0].size());
        
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                trans[j].push_back(matrix[i][j]);
            }
        }
        
        return trans;
    }
};
