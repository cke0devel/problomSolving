class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bitset<30> alpha;
        for(const char c : allowed) alpha.set(c-'a');
        
        int cnt = words.size();
        for(const string &word : words) {
            for(const auto c : word) {
                if(alpha.test(c-'a')==false) {
                    cnt -= 1;
                    break;
                }
            }
        }
        
        return cnt;
    }
};
