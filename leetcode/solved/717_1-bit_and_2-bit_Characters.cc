class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for(int i=0; i<bits.size()-1; i++) {
            if(bits[i] == 1) {
                i += 1;
                if(i >= bits.size()-1) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
