class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> a = arr;
        
        sort(begin(a), end(a));
        a.erase(unique(begin(a), end(a)), end(a));
        
        map<int,int> rank;
        for(int i=0; i<a.size(); i++) {
            rank[a[i]] = i+1;
        }
        
        for(auto &n : arr) {
            n = rank[n];
        }
        
        return arr;
    }
};
