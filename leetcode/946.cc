class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        
        auto popIt = begin(popped);
        
        for(const auto n : pushed) {
            s.push(n);
            
            while(popIt != end(popped) && *popIt == s.top()) {
                s.pop();
                ++popIt;
            }
        }
        
        return popIt == end(popped);
    }
};
