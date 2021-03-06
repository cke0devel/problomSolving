/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Segments in a String.
 * Memory Usage: 6.2 MB, less than 55.11% of C++ online submissions for Number of Segments in a String.
 */
class Solution {
public:
    int countSegments(string s) {
        s += ' ';
        
        int cnt = 0;
        for(int i=0; i<s.size()-1; i++) {
            if(s[i]!=' ' && s[i+1]==' ') {
                cnt += 1;
            }
        }
        
        return cnt;
    }
};
