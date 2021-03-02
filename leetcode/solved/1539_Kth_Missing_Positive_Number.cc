class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        auto it = begin(arr);
        
        for(int i=1; i<=2000; i++) {
            if(it!=end(arr) && *it==i) {
                ++it;
            } else {
                k--;
                if(k==0) {
                    return i;
                }
            }
        }
        
        return 0;
    }
};
