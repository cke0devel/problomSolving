class Solution {
public:
    string simplifyPath(string path) {
        deque<string> k;
        
        string name;
        for(const auto ch : path) {
            if(ch == '/') {
                if(name == "..") {
                    if(!k.empty()) {
                        k.pop_back();
                    }
                } else if(!name.empty() && name!=".") {
                    k.push_back(name);
                }
                
                name = "";
            } else {
                name += ch;
            }
        }
        
        if(k.empty()) {
            return "/";
        }
        
        return accumulate(begin(k), end(k), string(""),
                          [](const string &a, const string &b) {
                              return a+'/'+b;
                          });
    }
};
