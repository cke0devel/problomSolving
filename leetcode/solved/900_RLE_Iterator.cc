/**
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for RLE Iterator.
 * Memory Usage: 8.5 MB, less than 62.74% of C++ online submissions for RLE Iterator.
 */
class RLEIterator {
public:
    RLEIterator(vector<int>& A) : encoded(A), inner(cbegin(encoded)), cur(0) {
        if(!encoded.empty()) {
            cur = encoded.front();
        }
    }
    
    int next(int n) {
        if(inner == cend(encoded)) {
            return -1;
        }
        
        while(n > cur) {
            n -= cur;
            advance(inner, 2);
            if(inner == cend(encoded)) {
                return -1;
            }
            cur = *inner;
        }
        
        cur -= n;
        const int elem = *(inner+1);
        if(cur == 0) {
            advance(inner, 2);
        }
        
        return elem;
    }
    
private:
    const vector<int> &encoded;
    vector<int>::const_iterator inner;
    int cur;
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */
