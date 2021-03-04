class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        array<int,30> left;
        fill(begin(left), end(left), -1);
        
        int ans = -1;
        
        for(int i=0; i<s.size(); i++) {
            const int p = s[i]-'a';
            
            if(left[p]<0) {
                left[p] = i;
            } else {
                ans = max(ans, i-left[p]-1);
            }
        }
        
        return ans;
    }
};
