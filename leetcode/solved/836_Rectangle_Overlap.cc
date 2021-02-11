class Solution {
private:
    enum {
        left = 0,
        bottom = 1,
        right = 2,
        top = 3
    };
    
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(max(rec1[left], rec2[left]) >= min(rec1[right], rec2[right])) {
            return false;
        }
        if(max(rec1[bottom], rec2[bottom]) >= min(rec1[top], rec2[top])) {
            return false;
        }
        
        return true;
    }
};
