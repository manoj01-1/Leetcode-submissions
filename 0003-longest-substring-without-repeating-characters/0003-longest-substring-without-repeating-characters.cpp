#include <string>
#include <unordered_set>
using namespace std;

int longestsub(string s, int start) {
    int count = 0;
    unordered_set<char> hash;

    for (int i = start; i < s.length(); i++) {
        if (hash.find(s[i]) == hash.end()) {
            hash.insert(s[i]);
            count++;
        } else {
            hash.clear();
            return count;
        }
    }

    return count;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;

        for (int i = 0; i < s.length(); i++) {
            int temp = longestsub(s, i);
            if (temp > maxlen)
                maxlen = temp;
            if (temp == 0)
                break;
        }

        return maxlen;
    }
};