class Solution {
public:
    bool backspaceCompare(string S, string T) {
        auto trans = [](const string &s) -> stack<char> {
            stack<char> st;
            
            for(const auto c : s) {
                if(c=='#') {
                    if(!st.empty()) st.pop();
                } else {
                    st.push(c);
                }
            }
            
            return st;
        };
        
        return trans(S) == trans(T);
    }
};
