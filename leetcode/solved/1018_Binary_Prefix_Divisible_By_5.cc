class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int n = 0;
        
        vector<bool> ans;
        
        for(const auto bit : A) {
            n = ((n<<1) | bit) % 10;
            ans.push_back(n==0 || n==5);
        }
        
        return ans;
    }
};
