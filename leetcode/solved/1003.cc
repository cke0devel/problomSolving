class Solution {
public:
    bool isValid(string s) {
        if(s == "abc") {
            return true;
        }
        
        deque<char> q;
        for(const auto c : s) {
            q.push_back(c);
            
            if(q.size() >= 3 && c=='c') {
                if(*(rbegin(q)+1)=='b' && *(rbegin(q)+2)=='a') {
                    q.pop_back();
                    q.pop_back();
                    q.pop_back();
                }
            }
        }
        
        return q.empty();
    }
};
