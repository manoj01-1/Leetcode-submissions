class Solution {
public:
     void dfs(vector<vector<int>>& grid1,vector<vector<int>>& grid2, int i, int j,bool &issub) { 
        if (i < 0 || j < 0 || i >= grid1.size() || j >= grid1[0].size() || grid2[i][j] == 0) 
            return;
        if(grid1[i][j]==0){
            issub=false;
            return;
        }
        
        grid2[i][j] = 0;
        
        dfs(grid1,grid2, i - 1, j,issub);
        dfs(grid1,grid2, i, j - 1,issub);
        dfs(grid1,grid2, i, j + 1,issub);
        dfs(grid1,grid2, i + 1, j,issub);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int row=grid1.size();
        int col=grid1[0].size();
        int count=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid1[i][j]==1 && grid2[i][j]==1){
                    bool issubIsland=true;
                    dfs(grid1,grid2,i,j,issubIsland);
                    if(issubIsland)count++;
                }
            }
        }
        return count;
    }
};