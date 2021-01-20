class Solution {
public:
    bool detectCapitalUse(string word) {
        const int capitalCnt = count_if(begin(word), end(word),
                                       [](const char c){return isupper(c);});
        
        if(capitalCnt==0 || capitalCnt==word.size()) {
            return true;
        }
        if(capitalCnt==1 && isupper(word[0])) {
            return true;
        }
        
        return false;
    }
};
