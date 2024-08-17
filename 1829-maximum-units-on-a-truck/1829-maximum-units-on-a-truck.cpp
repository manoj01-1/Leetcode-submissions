class Solution {
public:
    static bool comp(vector<int>&el1,vector<int>&el2){
        return el1[1]>el2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
            int res=0;
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<=truckSize){
                truckSize-=boxTypes[i][0];
                res+=(boxTypes[i][0]*boxTypes[i][1]);
            }
            else{
                res+=(truckSize*boxTypes[i][1]);
                break;
            }
        }
        return res;
    }
};