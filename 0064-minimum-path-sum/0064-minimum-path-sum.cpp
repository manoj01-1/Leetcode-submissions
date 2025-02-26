class Solution {
public:
    int fun(vector<vector<int>>&grid,int m,int n,int i,int j,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1)return  dp[i][j]=grid[i][j];

        if(i>=m || j>=n){
            return INT_MAX;
        }

        if(dp[i][j] != -1)return dp[i][j];
        int right=fun(grid,m,n,i,j+1,dp);
        int down=fun(grid,m,n,i+1,j,dp);

        return dp[i][j]=grid[i][j] + (down<right? down:right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>dp(m,vector<int>(n,-1));
       int res= fun(grid,m,n,0,0,dp);

       return res;
    }
};