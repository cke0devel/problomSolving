class Solution {
public:
    bool isValid(string s) {
        int p = 0;
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'c') {
                if(p<2) return false;
                if(s[p-1]!='b' || s[p-2]!='a') return false;
                p -= 2;
            } else {
                swap(s[i], s[p]);
                p++;
            }
        }
        
        return p==0;
    }
};
