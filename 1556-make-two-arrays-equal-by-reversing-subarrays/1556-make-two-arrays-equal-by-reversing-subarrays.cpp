class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!=arr.size())return false;

        unordered_map<int,int>targetmap,arrmap;


        for(int i=0;i<arr.size();i++){
            arrmap[arr[i]]++;
        }  

        for(int i=0;i<target.size();i++){
            targetmap[target[i]]++;
        }
        return targetmap==arrmap;
    }
};