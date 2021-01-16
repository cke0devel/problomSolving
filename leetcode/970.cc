class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        if(bound==0) {
            return {};
        }
        
        vector<int> powerOfX = {1};
        vector<int> powerOfY = {1};
        
        for(int p=x; p<bound; p*=x) {
            powerOfX.push_back(p);
        }
        for(int p=y; p<bound; p*=y) {
            powerOfY.push_back(p);
        }
        
        set<int> nums;
        for(const auto xx : powerOfX) {
            for(const auto yy : powerOfY) {
                const auto n = xx + yy;
                if(n > bound) break;
                nums.insert(xx + yy);
            }
        }
        
        return vector<int>(begin(nums), end(nums));
    }
};
