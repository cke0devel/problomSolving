class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        
        for(const auto c : s) {
            switch(c) {
                case '(': case '{': case '[':
                    bracket.push(c);
                    break;
                case ')':
                    if(bracket.top() != '(') {
                        return false;
                    }
                    bracket.pop();
                    break;
                case '}':
                    if(bracket.top() != '{') {
                        return false;
                    }
                    bracket.pop();
                    break;
                case ']':
                    if(bracket.top() != '[') {
                        return false;
                    }
                    bracket.pop();
                    break;
            }
        }
        
        return bracket.empty();
    }
};
