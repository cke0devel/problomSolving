class Solution {
public:
    string toGoatLatin(string S) {
        static const string vowel = "aeiouAEIOU";
        istringstream sin(S);
        
        string ans;
        
        string word;
        for(int i=1; sin >> word; i++) {
            if(vowel.find(word[0]) == string::npos) {
                rotate(begin(word), begin(word)+1, end(word));
            }
            word += "ma" + string(i, 'a');
            
            ans += ' ' + word;
        }
        
        return ans.substr(1);
    }
};
