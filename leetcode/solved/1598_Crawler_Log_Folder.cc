class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        
        for(const auto &d : logs) {
            if(d == "../") {
                depth = max(0, depth-1);
            } else if(d[0] != '.') {
                depth += 1;
            }
        }
        
        return depth;
    }
};
