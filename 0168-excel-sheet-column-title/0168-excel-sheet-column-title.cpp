class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while(columnNumber>0){
            columnNumber--;
            int rem=columnNumber%26;
            char temp='A'+rem;
            result+=temp;
            columnNumber/=26;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};