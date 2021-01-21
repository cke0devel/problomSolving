class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int blue = nums.size() - 1;
        
        int cur = 0;
        while(cur < nums.size()) {
            if(nums[cur]==0) {
                swap(nums[cur], nums[red]);
                red += 1;
                cur += 1;
            } else if(nums[cur]==2 && cur<blue) {
                swap(nums[cur], nums[blue]);
                blue -= 1;
            } else {
                cur += 1;
            }
        }
    }
};
