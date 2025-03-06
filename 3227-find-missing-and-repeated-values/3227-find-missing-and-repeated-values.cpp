class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int len=m*n;

        vector<int>hash1(len,0);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                hash1[grid[i][j]-1]++;
            }
        }

        vector<int>res(2,-1);
        for(int i=0;i<m*n;i++){
            if(hash1[i]==2)res[0]=i+1;

            if(hash1[i]==0)res[1]=i+1;
        }

        return res;
    }
};