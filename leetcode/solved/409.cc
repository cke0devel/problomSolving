class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        
        for(const auto ch : s) {
            m[ch] += 1;
        }
        
        int length = 0;
        int midChar = 0;
        for(const auto [ch, freq] : m) {
            length += freq & 0xFFFFE;
            if(freq%2 == 1) {
                midChar = 1;
            }
        }
        
        return length + midChar;
    }
};
