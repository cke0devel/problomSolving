class Solution {
public:
    bool judgeCircle(string moves) {
        int R=0, L=0, U=0, D=0;
        
        for(const char c : moves) {
            switch(c) {
                case 'R': R += 1; break;
                case 'L': L += 1; break;
                case 'U': U += 1; break;
                case 'D': D += 1; break;
            }
        }
        
        return R==L && U==D;
    }
};
