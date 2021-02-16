class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bitset<256> jewel;
        
        for(const auto c : jewels) {
            jewel.set(c);
        }
        
        return count_if(begin(stones), end(stones),
                        [&jewel](const char c) {
                           return jewel.test(c); 
                        });
    }
};
