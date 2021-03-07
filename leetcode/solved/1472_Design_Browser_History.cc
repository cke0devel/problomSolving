/**
 * Runtime: 112 ms, faster than 98.11% of C++ online submissions for Design Browser History.
 * Memory Usage: 58.1 MB, less than 49.39% of C++ online submissions for Design Browser History.
 */
class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
    }
    
    void visit(string url) {
        history.erase(begin(history)+p+1, end(history));
        history.push_back(url);
        p += 1;
    }
    
    string back(int steps) {
        p = max(0, p-steps);
        return history[p];
    }
    
    string forward(int steps) {
        p = min((int)history.size()-1, p+steps);
        return history[p];
    }
    
private:
    deque<string> history;
    int p = 0;
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
