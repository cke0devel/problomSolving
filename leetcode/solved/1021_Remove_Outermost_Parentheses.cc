class Solution {
public:
    string removeOuterParentheses(string S) {
        int depth = 0;
        string ans;
        
        for(const auto c : S) {
            if(c == '(') {
                depth += 1;
                if(depth > 1) {
                    ans += c;
                }
            } else {
                depth -= 1;
                if(depth > 0) {
                    ans += c;
                }
            }
        }
        
        return ans;
    }
};
