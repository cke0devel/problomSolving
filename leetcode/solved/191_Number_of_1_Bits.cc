class Solution {
public:
	int hammingWeight(uint32_t n) {
		return bitset<sizeof(n)*8>(n).count();
	}
};
