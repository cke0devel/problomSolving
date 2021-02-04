class Solution {
public:
    int numberOfSteps (int num) {
        int step = 0;
        
        for(;num;step++) {
            if(num%2 == 0) { num /= 2; }
            else { num -= 1; }
        }
        return step;
    }
};
