class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> st;
        long score[51] = {0};
        
        for(int i=0; i<S.size(); i++) {
            if(S[i] == '(') {
                st.emplace(i);
            } else {
                if(S[i-1] == '(') {
                    score[i] = 1;
                } else {
                    score[i] = score[i-1]*2;
                }
                if(st.top() > 0) {
                    if(S[st.top()-1] == ')') {
                        score[i] += score[st.top()-1];
                    }
                }
                
                st.pop();
            }
        }
        
        return score[S.size()-1];
    }
};
