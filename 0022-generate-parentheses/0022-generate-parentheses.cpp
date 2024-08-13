class Solution {
public:
    void fun(int n,vector<char>&s,vector<string>&res,int oc,int cc){
        if(oc==n&& cc==n){
            res.push_back(string(s.begin(),s.end()));
            return;
        }
        if(cc>oc){
            s.pop_back();
            return;
        }
        if(oc<n){
            s.push_back('(');
            fun(n,s,res,oc+1,cc);
            s.pop_back();
        }
        if(cc<oc){
            s.push_back(')');
            fun(n,s,res,oc,cc+1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
         vector<char>s;
         vector<string>res;
         int oc=0,cc=0;
        fun(n,s,res,oc,cc);
        return res;
    }
};