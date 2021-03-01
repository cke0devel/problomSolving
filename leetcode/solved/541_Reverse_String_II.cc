class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0,n=0; i<s.size(); i+=k,n++) {
            if(n%2 == 0) {
                reverse(begin(s)+i, begin(s)+min((int)s.size(), i+k));
            }
        }
        
        return s;
    }
};
