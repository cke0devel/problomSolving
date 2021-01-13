class Solution {
public:
	int numRescueBoats(vector<int>& people, int limit) {
		multiset<int> weights(begin(people), end(people));

		int carry = 0;
		while(!weights.empty()) {
			const auto it = cbegin(weights);
			const auto w = *it;
			weights.erase(it);

			if(w < limit) {
				const auto it = weights.lower_bound(limit-w);
				if(it != weights.end() && *it <= limit-w) {
					weights.erase(it);
				}
			}
			carry += 1;
		}

		return carry;
	}
};
