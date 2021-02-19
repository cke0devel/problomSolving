class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        string ans;
        
        for(int i=0; i<s.size(); i++) {
            const char c = s[i];
            
            if(isalpha(c)) {
                ans += c;
            } else if(c == '(') {
                ans += c;
                st.emplace(c, ans.size()-1);
            } else if(c == ')') {
                if(!st.empty() && st.top().first == '(') {
                    ans += c;
                    st.pop();
                }
            }
        }
        
        while(!st.empty()) {
            ans.erase(begin(ans) + st.top().second);
            st.pop();
        }
        
        return ans;
    }
};
