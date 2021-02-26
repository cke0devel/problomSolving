class Solution {
public:
    int addDigits(int num) {
        while(num>=10) {
            num = process(num);
        }
        
        return num;
    }
    
private:
    int process(int num) {
        int ans = 0;
        
        while(num>0) {
            ans += num%10;
            num /= 10;
        }
        
        return ans;
    }
};
