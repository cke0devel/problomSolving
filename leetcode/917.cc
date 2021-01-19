class Solution {
public:
    string reverseOnlyLetters(string S) {
        string ret(S);
        auto targetIt = begin(ret);
        
        for(auto it=rbegin(S); it!=rend(S); ++it) {
            if(!isalpha(*it)) {
                continue;
            }
            
            *targetIt = *it;
            ++targetIt;
            while(targetIt!=end(ret) && !isalpha(*targetIt)) {
                ++targetIt;
            }
        }
        
        return ret;
    }
};
