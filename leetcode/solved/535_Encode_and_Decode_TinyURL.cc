class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        const string url = "http://tinyurl.com/" + hash(longUrl);
        hashMap[url] = longUrl;
        
        return url;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        auto it = hashMap.find(shortUrl);
        if(it == hashMap.end()) {
            return "";
        }
        
        return it->second;
    }
    
private:
    unordered_map<string, string> hashMap;
    
    const string hash(const string &data) const {
        constexpr uint32_t MOD_ADLER = 65521;
        
        uint32_t lower = 1, upper = 0;
    
        for(const char c : data) {
            lower = (lower + c) % MOD_ADLER;
            upper = (upper + lower) % MOD_ADLER;
        }
    
        return to_string((upper << 16) | lower);
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
