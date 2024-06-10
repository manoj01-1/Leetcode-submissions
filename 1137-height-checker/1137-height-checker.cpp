class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int chk=0;
        vector<int>temp=heights;
        sort(temp.begin(),temp.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=temp[i]){
                chk++;
            }
        }
        return chk;
    }
};