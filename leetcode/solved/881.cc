class Solution {
public:
	int numRescueBoats(vector<int>& people, int limit) {
		multiset<int> weights(begin(people), end(people));

		int carry = 0;
		while(!weights.empty()) {
			const auto it = cbegin(weights);
			const auto w = *it;
			weights.erase(it);

			const auto another = limit - w;
			if(!weights.empty() && *weights.begin() <= another) {
				auto it = weights.lower_bound(another);
				if(it==weights.end() || (it!=weights.end() && *it != another)) {
					--it;
				}

				weights.erase(it);
			}

			carry += 1;
		}

		return carry;
	}
};
