class Solution {
public:
    bool halvesAreAlike(string s) {
        const string vowels("aeiouAEIOU");
        
        auto is_vowel = [&vowels](char c) { return vowels.find(c) != string::npos; };
        
        const int first = count_if(begin(s), begin(s)+s.size()/2, is_vowel);
        const int second = count_if(begin(s)+s.size()/2, end(s), is_vowel);
        
        return first == second;
    }
};
