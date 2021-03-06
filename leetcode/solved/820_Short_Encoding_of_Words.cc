/*
 * Runtime: 32 ms
 * Memory Usage: 13.6 MB
 *
 * Your runtime beats 97.00 % of cpp submissions.
 * Your memory usage beats 98.00 % of cpp submissions.
 */
class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        for(auto &word : words) {
            reverse(begin(word), end(word));
        }
        sort(begin(words), end(words), greater<string>());
        
        int ans = words.size() + words[0].size();
        for(int i=1; i<words.size(); i++) {
            if(words[i].size()<=words[i-1].size() && words[i-1].compare(0, words[i].size(), words[i]) == 0) {
                ans -= 1;
            } else {
                ans += words[i].size();
            }
        }
        
        return ans;
    }
};
