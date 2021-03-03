class Solution {
public:
    string reorderSpaces(string text) {
        int space = count_if(begin(text), end(text),
                             [](const char c) { return c==' '; });
        
        if(space == 0) {
            return text;
        }
        
        vector<string> words;
        istringstream sin(text);
        copy(istream_iterator<string>(sin), istream_iterator<string>(),
             back_inserter(words));

        if(words.size() == 1) {
            return words[0] + string(space, ' ');
        }
        
        const int blank = space / (words.size()-1);
        
        string ans;
        for(const string &word : words) {
            ans += word + string(min(blank, space), ' ');
            space -= blank;
        }
        
        return ans;
    }
};
