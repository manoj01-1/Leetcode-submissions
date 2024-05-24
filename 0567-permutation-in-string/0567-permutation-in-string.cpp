#include <string>
#include <vector>
using namespace std;

bool ispermutation(string s1, string s2, int s, int e) {
    int hash[26] = {0};
    for (char c : s1) {
        hash[c - 'a']++;
    }
    for (int i = s; i < e; i++) {
        hash[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (hash[i] != 0) return false;
    }
    return true;
}

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        if (len1 > len2) return false;

        for (int i = 0; i <= len2 - len1; i++) {
            if (ispermutation(s1, s2, i, i + len1)) {
                return true;
            }
        }
        return false;
    }
};
