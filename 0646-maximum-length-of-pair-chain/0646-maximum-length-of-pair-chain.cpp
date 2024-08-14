class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end() ,[] (vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });

        int count=0;
        int free=INT_MIN;
        for(int i=0;i<pairs.size();i++){
            vector<int>&pair=pairs[i];
            if(pair[0]>free){
                count++;
            free=pair[1];
            }
        }
        return count;
    }
};