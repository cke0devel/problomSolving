class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        for(const auto &piece : pieces) {
            auto it = find(begin(arr), end(arr), piece[0]);
            if(it == end(arr)) return false;
            
            if(distance(it, end(arr)) < piece.size()) {
                return false;
            }
            
            if(equal(begin(piece), end(piece), it) == false) {
                return false;
            }
        }
        
        return true;
    }
};
