class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=1; i<flowerbed.size() && n>0; i++) {
            if(flowerbed[i-1]==0 && flowerbed[i]==0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        
        return n==0;
    }
};
