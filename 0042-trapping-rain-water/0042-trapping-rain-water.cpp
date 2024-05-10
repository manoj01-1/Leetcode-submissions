
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0) return 0;
        int n=height.size();
        int result=0;
        int leftmax[n], rightmax[n];
        leftmax[0]=height[0];

        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }

        for(int i=0;i<n;i++){
            result=result+min(leftmax[i],rightmax[i])-height[i];
        }

        return result;
    }
};
