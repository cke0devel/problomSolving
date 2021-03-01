class Solution {
public:
    int maxPower(string s) {
        int power = 1;
        
        int cur = 1;
        for(int i=1; i<s.size(); i++) {
            if(s[i-1] == s[i]) {
                cur += 1;
            } else {
                power = max(power, cur);
                cur = 1;
            }
        }
        
        return power;
    }
};
