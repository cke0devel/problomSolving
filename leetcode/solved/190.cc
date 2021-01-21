class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;

        for(int i=0; i<32; i++) {
            ans |= ((n>>(31-i))&1)<<i;
        }
        
        return ans;
    }
};
