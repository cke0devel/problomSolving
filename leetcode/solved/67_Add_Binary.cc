class Solution {
public:
    string addBinary(string a, string b) {
        const int l = max(a.size(), b.size());
        a = string(l-a.size(), '0') + a;
        b = string(l-b.size(), '0') + b;
        
        string ans(l, '0');
        
        int carry = 0;
        for(int i=l-1; i>=0; i--) {
            const int acc = carry + (a[i]-'0') + (b[i]-'0');
            
            ans[i] = '0' + acc%2;
            carry = acc/2;
        }
        if(carry) {
            ans = '1' + ans;
        }

        return ans;
    }
};
