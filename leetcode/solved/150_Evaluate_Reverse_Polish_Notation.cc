class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(const auto &token : tokens) {
            if(isdigit(token.back())) {
                st.push(stoi(token));
            } else {
                const int op2 = st.top(); st.pop();
                const int op1 = st.top(); st.pop();
                
                switch(token[0]) {
                    case '+': st.push(op1+op2); break;
                    case '-': st.push(op1-op2); break;
                    case '*': st.push(op1*op2); break;
                    case '/': st.push(op1/op2); break;
                }
            }
        }
        
        return st.top();
    }
};
