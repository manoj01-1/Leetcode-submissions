class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string start=strs[0];
        string end=strs[n-1];
        if(start[0]!=end[0])return res;
        for(int i=0;i<min(start.length(),end.length());i++){
            if(start[i]==end[i])
            res+=start[i];
            else 
            break;
        }
            
        return res;
    }
};