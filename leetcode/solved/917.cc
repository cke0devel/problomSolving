class Solution {
public:
    string reverseOnlyLetters(string S) {
        string ret(S);
        auto targetIt = find_if(begin(ret), end(ret),
                                [](const char ch){return isalpha(ch);});
        
        for(auto it=rbegin(S); it!=rend(S); ++it) {
            if(!isalpha(*it)) {
                continue;
            }
            
            *targetIt = *it;
            ++targetIt;
            targetIt = find_if(targetIt, end(ret),
                               [](const char ch){return isalpha(ch);});
        }
        
        return ret;
    }
};
