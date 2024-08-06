class Solution {
public:
    int minimumPushes(string word) {
        int res=0;
       vector<int>hash(26);
        for(int i=0;i<word.length();i++){
            hash[word[i]-'a']++;
        }

        sort(hash.rbegin(),hash.rend());
        for(int i=0;i<26;i++){
            res +=(i/8 +1)*hash[i];
        }

        return res;

    }
};