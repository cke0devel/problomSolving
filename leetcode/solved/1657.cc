class Solution {
public:
    bool closeStrings(string word1, string word2) {
        const string s1 = normalize(word1);
        const string s2 = normalize(word2);
        
        cout << s1 << ' ' << s2 << endl;
        return s1 == s2;
    }
    
private:
    string normalize(string s) {
        map<char,int> freq;
        
        for(const auto ch : s) {
            freq[ch] += 1;
        }
        
        vector<int> k;
        transform(begin(freq), end(freq), back_inserter(k),
                 [](const auto &e) { return e.second; });
        sort(begin(k), end(k));
        
        string ans;
        auto it = begin(k);
        for(auto &e : freq) {
            ans += string(*it, e.first);
            ++it;
        }
        
        return ans;
    }
};
