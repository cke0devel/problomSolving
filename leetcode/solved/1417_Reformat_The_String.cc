class Solution {
public:
    string reformat(string s) {
        string alpha, digit;
        
        for(const char c : s) {
            if(isalpha(c)) alpha += c;
            else digit += c;
        }
        
        if(abs((int)alpha.size() - (int)digit.size()) > 1) {
            return "";
        }
        
        if(alpha.size() < digit.size()) {
            swap(alpha, digit);
        }
        
        string ans;
        for(int i=0; i<digit.size(); i++) {
            ans += alpha[i];
            ans += digit[i];
        }
        
        if(alpha.size() > digit.size()) {
            ans += alpha.back();
        }
        
        return ans;
    }
};
