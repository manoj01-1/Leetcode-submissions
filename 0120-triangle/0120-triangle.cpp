class Solution {
public:
    int fun(vector<vector<int>>& triangle,vector<vector<int>>&dp,int row,int curr,int col){
        if (curr == row - 1) {
            return triangle[curr][col];
        }
        if (dp[curr][col] != -1) {
            return dp[curr][col];
        }

        int left = fun(triangle, dp, row, curr + 1, col);
        int right = fun(triangle, dp, row, curr + 1, col + 1);
        dp[curr][col] = triangle[curr][col] + std::min(left, right);
        return dp[curr][col];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int row=triangle.size();
        vector<vector<int>>dp(row,vector<int>(row,-1));
    
        
        return fun(triangle,dp,row,0,0);
        
    }
};