class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> freq;
        
        for(const auto n : nums) {
            freq[n] += 1;
        }
        
        int length = 0;
        for(auto it=begin(freq);;++it) {
            auto next = it;
            ++next;
            if(next == end(freq)) {
                break;
            }
            
            if(next->first - it->first == 1 && length < next->second+it->second) {
                length = next->second + it->second;
            }
        }
        
        return length;
    }
};
