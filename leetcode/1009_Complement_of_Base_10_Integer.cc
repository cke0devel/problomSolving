class Solution {
public:
    int bitwiseComplement(int N) {
        const int mask = (1 << ((sizeof(N)*8) - __builtin_clz(N))) - 1;
        
        return (~N) & mask;
    }
};
