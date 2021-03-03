class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size()) {
            return false;
        }
        
        vector<int> pos;
        bool multi = false;
        array<int,30> freq = {0,};
        
        for(int i=0; i<A.size(); i++) {
            if(A[i] != B[i]) pos.push_back(i);
            freq[A[i]-'a'] += 1;
        }
        
        if(pos.empty()) {
            for(int i=0; i<freq.size(); i++) {
                if(freq[i]>=2) return true;
            }
        }
        
        if(pos.size() != 2) {
            return false;
        }

        return A[pos[0]]==B[pos[1]] && A[pos[1]]==B[pos[0]];
    }
};
