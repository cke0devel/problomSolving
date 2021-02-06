class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int pp = 0;
        int p = flowerbed[0];
        
        for(int i=1; i<flowerbed.size() && n>0; i++) {
            if(pp==0 && p==0 && flowerbed[i]==0) {
                flowerbed[i-1] = 1;
                n--;
            }
            
            pp = flowerbed[i-1];
            p = flowerbed[i];
        }
        
        if(n>0 && pp==0 && p==0) {
            flowerbed.back() = 1;
            n--;
        }
        
        return n==0;
    }
};
