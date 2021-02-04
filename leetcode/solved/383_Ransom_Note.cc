class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        array<int, 27> arr = {0,};
        
        for(const char c : magazine) {
            arr[c-'a'] += 1;
        }
        
        for(const char c : ransomNote) {
            arr[c-'a'] -= 1;
            if(arr[c-'a'] < 0) {
                return false;
            }
        }
        
        return true;
    }
};
