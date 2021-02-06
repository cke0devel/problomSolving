class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1 && flowerbed[0]==0) {
            flowerbed[0] = 1;
            n--;
        }
        if(flowerbed.size()>=2 && flowerbed[0]==0 && flowerbed[1]==0) {
            flowerbed[0] = 1;
            n--;
        }
        if(flowerbed.size()>=2 && flowerbed.back()==0 && flowerbed[flowerbed.size()-2]==0) {
            flowerbed.back() = 1;
            n--;
        }
        
        for(int i=2; i<flowerbed.size() && n>0; i++) {
            if(flowerbed[i-2]==0 && flowerbed[i-1]==0 && flowerbed[i]==0) {
                flowerbed[i-1] = 1;
                n--;
            }
        }
        
        return n==0;
    }
};
