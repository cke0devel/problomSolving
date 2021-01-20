class Solution {
public:
    bool isPathCrossing(string path) {
        int N=0, S=0, E=0, W=0;
        
        for(const auto c : path) {
            if(c=='N') N++;
            else if(c=='S') S++;
            else if(c=='E') E++;
            else if(c=='W') W++;
            
            if(N==S && E==W) {
                return true;
            }
        }
        
        return false;
    }
};
