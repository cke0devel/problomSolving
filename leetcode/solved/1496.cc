class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0, y=0;
        set<pair<int,int>> points = {{x,y}};
        
        for(const auto c : path) {
            if(c=='N') y++;
            else if(c=='S') y--;
            else if(c=='E') x++;
            else if(c=='W') x--;

            if(points.emplace(x,y).second == false) {
                return true;
            }
        }
        
        return false;
    }
};
