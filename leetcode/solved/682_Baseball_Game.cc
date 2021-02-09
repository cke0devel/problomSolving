class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        
        for(const auto &op : ops) {
            if(op == "D") {
                record.push_back(record.back()*2);
            } else if(op == "C") {
                record.pop_back();
            } else if(op == "+") {
                record.push_back(record.back() + *(rbegin(record)+1));
            } else {
                record.push_back(atoi(op.c_str()));
            }
        }
        
        return accumulate(begin(record), end(record), 0);
    }
};
