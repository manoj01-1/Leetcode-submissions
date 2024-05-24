class Solution {
public:
    bool canJump(vector<int>& nums) {
        int stepsleft=nums[0];
        for(int i=1;i<nums.size();i++){
            stepsleft--;
            if(stepsleft<0) return false;
            if(i==nums.size())return true;
            if(stepsleft<nums[i]){
                stepsleft=nums[i];
            }
        }
        return true;
    }
};