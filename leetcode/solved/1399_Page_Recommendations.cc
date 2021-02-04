class Solution {
public:
	int sumOfDigits(const int n) {
		int s = 0;

		for(int k=n; k!=0; k/=10) {
			s += k%10;
		}

		return s;
	}

	int countLargestGroup(int n) {
		map<int,int> sumOfDigitsCount;

		int ans = 0;
		for(int i=1;i<=n;i++) {
			const int s = sumOfDigits(i);
			sumOfDigitsCount[s] += 1;
			ans = max(ans, sumOfDigitsCount[s]);
		}

		return count_if(begin(sumOfDigitsCount), end(sumOfDigitsCount),
				[ans](const auto &e) { return e.second == ans; });
	}
};
