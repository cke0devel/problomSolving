class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        
        for(auto it=rbegin(digits); it!=rend(digits); ++it) {
            *it += carry;
            
            carry = *it/10;
            *it %= 10;
        }
        
        if(carry) {
            digits.insert(begin(digits), 1);
        }
        
        return digits;
    }
};
