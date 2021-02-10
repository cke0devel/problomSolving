class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(begin(candyType), end(candyType));
        auto it = unique(begin(candyType), end(candyType));
        
        return min((int)candyType.size()/2, (int)distance(begin(candyType), it));
    }
};
