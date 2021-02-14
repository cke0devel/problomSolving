class Solution {   
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int8_t> colors(graph.size());
        
        fill(begin(colors), end(colors), -1);
        
        for(int i=0; i<colors.size(); i++) {
            if(colors[i] == -1) {
                colors[i] = 0;
                
                deque<int> q = {i};
                while(!q.empty()) {
                    const int u = q.front(); q.pop_front();
                    
                    for(const auto v : graph[u]) {
                        if(colors[v] == -1) {
                            colors[v] = (colors[u]+1)%2;
                            q.push_back(v);
                        } else if(colors[v] != (colors[u]+1)%2) {
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
