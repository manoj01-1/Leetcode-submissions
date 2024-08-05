class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>hash;
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(hash[arr[i]]==1){
                count++;
                if(count==k)return arr[i];
            }
        }
        
        return "";
    }
};