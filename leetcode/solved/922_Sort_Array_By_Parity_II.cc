class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        std::partition(begin(A), end(A),
                       [](int i){return i % 2 == 0;});
        
        auto even = begin(A) + 1;
        auto odd = end(A) - 2;
        
        while(even < odd) {
            swap(*even, *odd);
            even += 2;
            odd -= 2;
        }
        
        return A;
    }
};
