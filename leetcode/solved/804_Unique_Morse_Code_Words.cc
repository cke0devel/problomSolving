class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        const string table[] = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
        set<string> s;
        
        for(const string &word : words) {
            string sign;
            
            for(const char c : word) {
                sign += table[c-'a'];
            }
            
            s.insert(sign);
        }
        
        return s.size();
    }
};
