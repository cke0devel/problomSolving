class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dx = coordinates[0][0] - coordinates[1][0];
        int dy = coordinates[0][1] - coordinates[1][1];
        const int dk = gcd(dx,dy);
        
        dx /= dk;
        dy /= dk;
        
        if(dx==0) dy=1;
        if(dy==0) dx=1;
        if(dx<0) { dx*=-1; dy*=-1; }
        
        for(int i=2; i<coordinates.size(); i++) {
            int x = coordinates[0][0] - coordinates[i][0];
            int y = coordinates[0][1] - coordinates[i][1];
            const int k = gcd(x,y);
            
            x /= k;
            y /= k;
            
            if(x==0) y=1;
            if(y==0) x=1;
            if(x<0) { x*=-1; y*=-1; }
            
            if(dx!=x || dy!=y) {
                return false;
            }
        }
        
        return true;
    }
};
