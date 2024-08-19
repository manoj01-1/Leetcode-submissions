class Solution {
public:
    string makestr(string s){
        stack<int>numst;
        stack<string>strst;
        string res;
        string currstr="";
        int curr=0;
        for(int i=0;i<s.length();i++){
            
            if(isdigit(s[i])){
                    curr=curr*10 + (s[i]-'0');
                    
            }
            else if(s[i]=='['){
                numst.push(curr);
                strst.push(currstr);

                curr=0;
                currstr="";
            }

            else if(s[i]==']'){
                int times=numst.top();
                numst.pop();
                
                string temp=currstr;
                currstr=strst.top();
                strst.pop();

                while(times--){
                    currstr+=temp;
                }

            }

            else currstr+=s[i];

        }

        return currstr;
    }
    string decodeString(string s) {
        
        return makestr(s);
    }
};