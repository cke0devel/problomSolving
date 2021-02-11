class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return accumulate(begin(word1), end(word1), string())
            == accumulate(begin(word2), end(word2), string());
    }
};
