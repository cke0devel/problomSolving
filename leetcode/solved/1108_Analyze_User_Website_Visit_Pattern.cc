class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        
        for_each(begin(address), end(address),
                 [&ans](const char c) {
                     ans += c=='.' ? "[.]" : string(1, c);
                 });
        
        return ans;
    }
};
