class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c != nums.size()*nums[0].size()) {
            return nums;
        }
        
        vector<vector<int>> mat(r);
        fill(begin(mat), end(mat), vector<int>(c));
        
        int ri=0, ci=0;
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<nums.size(); j++) {
                mat[ri][ci] = nums[i][j];
                
                ci += 1;
                if(ci == c) {
                    ri += 1;
                    ci = 0;
                }
            }
        }
        
        return mat;
    }
};
