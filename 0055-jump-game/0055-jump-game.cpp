class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int maxind=0;
        for(int i=0;i<size;i++){
            int curr=nums[i]+i;
            if(i>maxind)return false;
            if(curr>maxind)maxind=curr;
            if(maxind>=size-1)return true;

        }
        return false;
    }
};