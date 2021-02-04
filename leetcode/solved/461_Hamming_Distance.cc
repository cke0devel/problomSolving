class Solution {
public:
	int hammingDistance(int x, int y) {
		constexpr size_t bits = sizeof(x) * 8;
		const bitset<bits> xx(x);
		const bitset<bits> yy(y);
		const auto code = xx ^ yy;

		return code.count();
	}
};
