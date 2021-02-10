class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        deque<int> q = {start};
        set<int> visits = {start};
        
        while(!q.empty()) {
            const int p = q.front(); q.pop_front();
            if(arr[p] == 0) {
                return true;
            }
            
            if(p+arr[p] < arr.size() && visits.insert(p+arr[p]).second) {
                q.push_back(p+arr[p]);
            }
            if(p-arr[p] >= 0 && visits.insert(p-arr[p]).second) {
                q.push_back(p-arr[p]);
            }
        }
        
        return false;
    }
};
