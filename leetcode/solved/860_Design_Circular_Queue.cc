class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        array<int,3> moneys = {0,0,0};
        
        for(const auto n : bills) {
            int changeFive = 0;
            int changeTen = 0;
            
            switch(n) {
                case 5:
                    moneys[0] += 1;
                    break;
                case 10:
                    moneys[1] += 1;
                    changeFive += 1;
                    break;
                case 20:
                    moneys[2] += 2;
                    if(moneys[1] == 0) {
                        changeFive = 3;
                    } else {
                        changeTen = 1;
                        changeFive = 1;
                    }
                    break;
            }
            
            moneys[0] -= changeFive;
            moneys[1] -= changeTen;
            if(moneys[0]<0 || moneys[1]<0) {
                return false;
            }
        }
        
        return true;
    }
};
