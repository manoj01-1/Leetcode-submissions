class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0;
        for (int i = 0; i < t.length(); i++) {
            if (sIndex < s.length() && s[sIndex] == t[i]) {
                sIndex++;
            }
        }
        return sIndex == s.length();
    }
};