class Solution {
public:
	int getMaximumGenerated(int n) {
		array<int, 101> ar = {0,1,};

		if(n == 0) return 0;
		if(n == 1) return 1;

		int ans = 1;

		for(int i=2;i<=n;i++) {
			ar[i] = ar[i/2];
			if(i%2) ar[i] += ar[i/2+1];

			ans = max(ans, ar[i]);
		}

		return ans;
	}
};
