class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int &temparea){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)return;
        temparea++;
        grid[i][j]=0;
        
            dfs(grid,i-1,j,temparea);
            dfs(grid,i,j-1,temparea);
            dfs(grid,i,j+1,temparea);
            dfs(grid,i+1,j,temparea);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int area=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    int temp=0;
                    dfs(grid,i,j,temp);
                    if(temp>area)area=temp;
                }
            }
        }
        return area;
    }
};