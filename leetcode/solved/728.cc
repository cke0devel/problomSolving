class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int n=left; n<=right; n++) {
            if(isSelfDividingNumber(n)) {
                ans.push_back(n);
            }
        }
        
        return ans;
    }
    
private:
    bool isSelfDividingNumber(int n) const {
        const int orig = n;
        
        while(n) {
            const int digit = n%10;
            n /= 10;
            
            if(digit==0 || orig%digit!=0) {
                return false;
            }
        }
               
        return true;
    }
};
