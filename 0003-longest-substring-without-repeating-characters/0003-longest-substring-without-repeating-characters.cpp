class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0, l = 0; 
        vector<int> hash(256, -1); 

        for (int r = 0; r < s.length(); r++) {
            
            if (hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            hash[s[r]] = r; 
            maxlen = max(maxlen, r - l + 1); 
        }

        return maxlen; 
    }
};
