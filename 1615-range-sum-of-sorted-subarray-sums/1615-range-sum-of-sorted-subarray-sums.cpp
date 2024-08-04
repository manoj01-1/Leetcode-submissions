class Solution {
public:
    
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>sumarr;
         int sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum+=nums[j];
                sumarr.push_back(sum);
            }
            sum=0;
        }


        sort(sumarr.begin(),sumarr.end());
        int res=0;
        int mod=1e9 +7;
        for(int i=left-1;i<right;i++){
            res=(res+sumarr[i])%mod;
        }
        return res;
    }
};