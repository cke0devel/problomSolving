// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long low = 1;
        long high = n;
        
        while(low<high) {
            const int version = (low+high) / 2;
            
            if(isBadVersion(version)) {
                high = version;
            } else {
                low = version+1;
            }
        }
        
        return low;
    }
};
