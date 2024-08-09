class Solution {
public:
    bool ismagic(vector<vector<int>>&grid,int i,int j){
        int sum=0;
        unordered_map<int,int>temp;
        for(int m=i;m<i+3;m++){
            for(int n=j;n<j+3;n++){
                if(grid[m][n]>9 || grid[m][n]<1)return false;
                temp[grid[m][n]]++;
                if(m==i)sum+=grid[m][n]; 
            }
        }
        if(temp.size()!=9)return false;
        for(int k=0;k<3;k++){
            if(grid[i+k][j] + grid[i+k][j+1] +grid[i+k][j+2]!=sum)return false;
            if(grid[i][j+k] + grid[i+1][j+k] +grid[i+2][j+k]!=sum)return false;
        }
        if(grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]!=sum)return false;
        if(grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]!=sum)return false;
        
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count=0;
        int row=grid.size();
        int col=grid[0].size();
        if(row<3 ||col<3)return 0;
        for(int i=0;i<=row-3;i++){
            for(int j=0;j<=col-3;j++){
                //if(i+2 <row && j+2 <col){
                    if(ismagic(grid,i,j))count++;
                //}
            }
        } 
        return count;   
    }
};