class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        constexpr int numAlpha = 'z' - 'a' + 1;
        
        int sum = 0;
        for(auto it=rbegin(shifts); it!=rend(shifts); ++it) {
            const int n = *it % numAlpha;
            
            *it = (*it + sum) % numAlpha;
            sum = (sum + n) % numAlpha;
        }
        
        transform(cbegin(shifts), cend(shifts), cbegin(S), begin(S),
                  [](const int shift, const char c) {
                      return 'a' + (c-'a' + shift)%numAlpha;
                  });

        return S;
    }
};
