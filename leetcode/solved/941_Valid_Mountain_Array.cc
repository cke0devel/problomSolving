class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        
        int p = 0;
        while(p+1<arr.size() && arr[p]<arr[p+1]) {
            p += 1;
        }
        if(p==0 || p==arr.size()-1) {
            return false;
        }
        
        p += 1;
        for(;p<arr.size(); p++) {
            if(arr[p-1]<=arr[p]) {
                return false;
            }
        }
        
        return true;
    }
};
