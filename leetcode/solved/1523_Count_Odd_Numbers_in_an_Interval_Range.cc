class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low+1)/2;
        
        if(low%2==1 && high%2==1) {
            ans += 1;
        }
        
        return ans;
    }
};
