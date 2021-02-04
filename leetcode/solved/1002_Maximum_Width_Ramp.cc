class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        array<int, 27> alpha = {0,};
        
        auto it = begin(A);
        for(const auto c : *it) alpha[c-'a']++;
        
        for(++it; it!=end(A); ++it) {
            array<int, 27> next = {0,};
            
            for(const auto c : *it) next[c-'a']++;
            
            for(int i=0; i<alpha.size(); i++) {
                alpha[i] = min(alpha[i], next[i]);
            }
        }
        
        vector<string> ans;
        for(int i=0; i<alpha.size(); i++) {
            while(alpha[i]--) {
                ans.emplace_back(1, 'a'+i);
            }
        }
        
        return ans;
    }
};
