class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(begin(boxTypes), end(boxTypes),
            [](const auto &lhs, const auto &rhs) {
                return lhs[1] > rhs[1];
            });
        
        int units = 0;
        for(const auto &box : boxTypes) {
            const int c = min(truckSize, box[0]);
            units += c * box[1];
            truckSize -= c;
            
            if(truckSize == 0) {
                break;
            }
        }
        
        return units;
    }
};
