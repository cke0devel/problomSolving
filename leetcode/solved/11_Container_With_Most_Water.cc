class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        
        int ans = 0;
        
        while(left < right) {
            int area = 0;
            
            if(height[left] <= height[right]) {
                area = (right-left) * height[left];
                left += 1;
            } else {
                area = (right-left) * height[right];
                right -= 1;
            }
            
            ans = max(ans, area);
        }
        
        return ans;
    }
};
