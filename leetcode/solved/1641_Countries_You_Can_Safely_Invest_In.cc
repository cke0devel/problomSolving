class Solution {
public:
    int countVowelStrings(int n) {
        if(n == 1) {
            return 5;
        }
        
        int ans = 0;
        for(int i=0;i<5;i++) {
            ans += countVowelStrings(n-1, i);
        }
        
        return ans;
    }
    
private:
    int countVowelStrings(int n, int k) {
        if(n==1) {
            return 5-k;
        }
        
        int ans = 0;
        for(int i=k;i<5;i++) {
            ans += countVowelStrings(n-1, i);
        }
        
        return ans;
    }
};
