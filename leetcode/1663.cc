class Solution {
public:
    string getSmallestString(int n, int k) {
        int z = k/26;
        k %= 26;
        
        if(z+k < n) {
            const int r = (n-(z+k)+25)/26;
            z -= r;
            k += r*26;
        }

        n -= z;
        
        if(n==0) {
            return string(z, 'z');
        }

        return string(n-1, 'a') + char('a'+k-(n-1)-1) + string(z, 'z');
    }
};
