class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        
        int push = 0;
        int pop = 0;
        
        while(push<pushed.size() || pop<popped.size()) {
            if(st.empty()==false && st.top()==popped[pop]) {
                st.pop();
                pop += 1;
            } else {
                if(push >= pushed.size()) {
                    return false;
                }
                st.push(pushed[push]);
                push += 1;
            }
        }
        
        return st.empty();
    }
};
