class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q(less<int>(), stones);
        
        while(q.size() > 1) {
            const int x = q.top(); q.pop();
            const int y = q.top(); q.pop();
            
            if(x != y) {
                q.push(x-y);
            }
        }
        
        return q.empty() ? 0 : q.top();
    }
};
