class Solution {
public:
    bool checkRecord(string s) {
        int lateCnt = 0;
        bool absented = false;
        
        for(const auto c : s) {
            if(c == 'A') {
                if(absented) {
                    return false;
                }
                absented = true;
                lateCnt = 0;
            } else if(c == 'L') {
                lateCnt += 1;
                if(lateCnt>2) {
                    return false;
                }
            } else {
                lateCnt = 0;
            }
        }
        
        return true;
    }
};
