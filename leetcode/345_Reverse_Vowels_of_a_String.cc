class Solution {
public:
    string reverseVowels(string s) {
        string vowels;
        
        for(const char c : s) {
            if(isVowels(c)) vowels += c;
        }
        
        auto vowelIter = rbegin(vowels);
        for(auto it=begin(s); it!=end(s); ++it) {
            if(isVowels(*it)) {
                *it = *vowelIter;
                ++vowelIter;
            }
        }
        
        return s;
    }
    
private:
    bool isVowels(const char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
};
