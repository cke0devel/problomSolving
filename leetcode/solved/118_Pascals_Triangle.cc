class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.emplace_back(1,1);
        
        for(int row=1; row<numRows; row++) {
            ans.emplace_back(1,1);
            
            for(int col=1; col<row; col++) {
                ans.back().push_back(ans[row-1][col-1] + ans[row-1][col]);
            }
            
            ans.back().push_back(1);
        }
        
        return ans;
    }
};
