class Solution {
public:
    string removeDuplicates(string S) {
        deque<char> s;
        
        for(const char c : S) {
            if(!s.empty() && s.back() == c) {
                s.pop_back();
            } else {
                s.push_back(c);
            }
        }
        
        return string(begin(s), end(s));
    }
};
