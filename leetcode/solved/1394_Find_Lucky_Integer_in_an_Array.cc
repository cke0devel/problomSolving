class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> freq;
        
        for(const auto n : arr) {
            freq[n] += 1;
        }
        
        int ans = -1;
        for(const auto e : freq) {
            if(e.first == e.second) {
                ans = e.first;
            }
        }
        
        return ans;
    }
};
