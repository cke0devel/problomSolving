class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        const int greatest = *max_element(begin(candies), end(candies));
        
        vector<bool> ans;
        for(const auto n : candies) {
            ans.push_back(n+extraCandies >= greatest);
        }
        
        return ans;
    }
};
