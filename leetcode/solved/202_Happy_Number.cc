class Solution {
public:
    bool isHappy(int n) {
        set<int> s = {1};
        
        while(s.insert(n).second) {
            n = process(n);
        }
        
        return n == 1;
    }
    
private:
    int process(int n) {
        int ans = 0;
        
        while(n>0) {
            ans += (n%10) * (n%10);
            n /= 10;
        }
        
        return ans;
    }
};
