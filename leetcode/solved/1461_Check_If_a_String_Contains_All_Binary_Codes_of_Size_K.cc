class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size() <= k) return false;
        
        const int mask = (1<<k) - 1;

        int bin = 0;
        auto it = begin(s);
        for(int i=0; i<k; i++) {
            bin = (bin<<1) | (*it -'0');
            ++it;
        }
        
        set<int> sub = {bin};
        while(it != end(s)) {
            bin = mask & ((bin<<1) | (*it -'0'));
            sub.insert(bin);
            ++it;
        }
        
        return sub.size() == (mask+1);
    }
};
