class Solution {
public:
    int fib(int n) {
        int prev=1;
        int prev2=1;
        int curr=0;
        if(n==0)return 0;
        if(n<=2)return 1;
        for(int i=2;i<n;i++){
            curr=prev+prev2;
            prev=prev2;
            prev2=curr;
        }

        return curr;
    }
};