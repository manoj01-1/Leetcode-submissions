class Solution {
public:
    string compressedString(string word) {
        string res;
        int count=1;
        for(int i=1;i<word.length();i++){
            if(word[i] != word[i-1] || count>=9){
                res+=to_string(count);
                res+=word[i-1];
                count=1;
            }
            else{
                count++;
            }
        }

        res+=to_string(count);
        res+=word[word.length()-1];

        return res;
    }
};