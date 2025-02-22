class Solution {
public:
    int longestValidParentheses(string s) {
        int lc=0,rc=0,maxc=0;
            int i=0;
        while(i<s.length()){
            if(s[i]=='(')
            lc+=1;
            else rc+=1;

            if(lc==rc)
            maxc=max(maxc,lc+rc);
            if(rc>lc)
            lc=rc=0;

            i++;
        }
        lc=rc=0;
        i=s.length()-1;
         while(i>=0){
            if(s[i]=='(')
            lc+=1;
            else rc+=1;

            if(lc==rc)
            maxc=max(maxc,lc+rc);
            if(rc<lc)
            lc=rc=0;

            i--;
        }

        return maxc;
    }
};