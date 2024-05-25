class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int res=INT_MIN;
    for(int i=0;i<nums.size();i++){
        res=max(nums[i],res);
    }
    if(res<0)return res;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<0)
            sum=0;
            if(sum+nums[i]>=0){
                sum+=nums[i];
                res=max(sum,res);
            }
        }
        return res;
    }
};