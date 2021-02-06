class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int ans = 0;
        map<int,int> boxes;
        
        for(int n=lowLimit; n<=highLimit; n++) {
            const int k = sumOfDigits(n);
            
            boxes[k] += 1;
            ans = max(ans, boxes[k]);
        }
        
        return ans;
    }
    
private:
    int sumOfDigits(int n) {
        int ans = 0;
        
        while(n) {
            ans += n%10;
            n/=10;
        }
        
        return ans;
    }
};
