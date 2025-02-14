class Solution {
public:
    int sod(int n){
        int sum=0;
        while(n){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }

        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>digitSum;
        int maxsum=-1;

        for(int i=0;i<nums.size();i++){
            int ds=sod(nums[i]);

            if(digitSum.find(ds)!=digitSum.end()){
                maxsum=max(maxsum,digitSum[ds]+nums[i]);
            }

                digitSum[ds]=max(digitSum[ds],nums[i]);
        }

    return maxsum;
    }
};