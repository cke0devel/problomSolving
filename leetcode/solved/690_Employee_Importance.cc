/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        map<int, Employee*> m;
        for(const auto e : employees) {
            m[e->id] = e;
        }
        
        deque<int> q = {id};
        
        int ans = 0;
        while(!q.empty()) {
            const int p = q.front();
            q.pop_front();
            
            ans += m[p]->importance;
            
            for(const auto n : m[p]->subordinates) {
                q.push_back(n);
            }
        }
        
        return ans;
    }
};
