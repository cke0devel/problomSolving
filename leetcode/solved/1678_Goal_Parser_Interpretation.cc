class Solution {
public:
    string interpret(string command) {
        string ans;
        
        for(int i=0; i<command.size(); i++) {
            if(command[i] == '(') {
                if(command[i+1]==')') {
                    ans += 'o';
                    i += 1;
                } else {
                    ans += "al";
                    i += 3;
                }
            } else {
                ans += 'G';
            }
        }
        
        return ans;
    }
};
