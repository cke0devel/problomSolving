class Solution {
public:
    int findComplement(int num) {
        if(num==0) return 1;
        
        const int mask = (1 << ((sizeof(num)*8) - __builtin_clz(num))) - 1;
        
        return (~num) & mask;
    }
};
