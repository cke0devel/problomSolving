class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1) return {0};
        if(n==2) return {-1,1};
        
        vector<int> ans;
        
        int k = 1;
        while(n>3) {
            ans.push_back(k);
            ans.push_back(-k);
            n -= 2;
            k += 1;
        }
        
        if(n==2) {
            ans.push_back(k);
            ans.push_back(-k);
        } else {
            ans.push_back(k);
            ans.push_back(k+1);
            ans.push_back(-(k+k+1));
        }
        
        return ans;
    }
};
