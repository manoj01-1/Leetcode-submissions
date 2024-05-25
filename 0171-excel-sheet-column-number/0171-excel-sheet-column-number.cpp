class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i=0;
        int res=0;
        while(i<columnTitle.length()){
            int temp=columnTitle[i++]-'A'+1;
            res=res*26+temp;
        }
        return res;
    }
};