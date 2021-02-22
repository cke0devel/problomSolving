class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> st;
        
        vector<int> ans(T.size());
        fill(begin(ans), end(ans), 0);
        
        for(int i=0; i<T.size(); i++) {
            while(!st.empty() && T[st.top()] < T[i]) {
                ans[st.top()] = i - st.top();
                st.pop();
            }
            
            st.push(i);
        }
        
        return ans;
    }
};
