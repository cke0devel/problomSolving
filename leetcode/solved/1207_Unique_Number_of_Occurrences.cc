class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> freq;
        for(const int n : arr) freq[n] += 1;
        
        set<int> o;
        for(const auto &e : freq) {
            o.insert(e.second);
        }
        
        return freq.size() == o.size();
    }
};
