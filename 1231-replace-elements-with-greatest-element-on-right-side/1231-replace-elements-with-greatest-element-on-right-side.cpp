class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> r(arr.size());
        r[arr.size()-1]=-1;
        for(int i=arr.size()-2;i>=0;i--){
            r[i]= max(r[i+1],arr[i+1]);
        }
        return r;
        
    }
};