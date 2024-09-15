class Solution {
public:


    int longestSubarray(vector<int>& nums) {
        int maxi=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi)maxi=nums[i];
       }
        int currlen=0;
        int maxlen=0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi){
                currlen++;
                if(currlen>maxlen){
                    maxlen=currlen;
                }
            }
            else 
            currlen=0;
       }

       return maxlen;
    }
};