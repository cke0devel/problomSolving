class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        std::partition(begin(A), end(A),
                       [](int i){return i % 2 == 0;});
        
        return A;
    }
};
