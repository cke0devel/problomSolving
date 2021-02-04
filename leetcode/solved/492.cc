class Solution {
public:
    vector<int> constructRectangle(int area) {
        int W = 1;
        
        for(int w=1, e=sqrt(area)+1; w<e; w++) {
            if(area%w == 0) W=w;
        }
        
        return {area/W, W};
    }
};
