class Solution {
public:
    string countAndSay(int n) {
        string curr="1";
        for(int i=1;i<n;i++){
            string next="";
            int j=0;
            while(j<curr.length()){
                int count=1;
                while(j<curr.length() && curr[j]==curr[j+1]){
                    count++;
                    j++;
                }
                next+=to_string(count)+curr[j];
                j++;
            }
            curr=next;
        }

        return curr;
        
    }
};