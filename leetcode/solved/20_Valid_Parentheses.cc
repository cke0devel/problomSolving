class Solution {
public:
    bool isValid(string s) {
        const map<char,char> parenthePair = {{')', '('}, {'}','{'},{']','['}};
        const string open = "({[";
        stack<char> bracket;
        
        for(const auto c : s) {
            if(open.find(c) != string::npos) {
                bracket.push(c);
            } else {
                if(bracket.empty() || bracket.top()!=parenthePair.find(c)->second) {
                    return false;
                }
                bracket.pop();
            }
        }
        
        return bracket.empty();
    }
};
