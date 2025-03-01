class Solution {
public:
    bool is_safe(vector<string>ds,int row,int col,int n){
        int duprow=row;
        int dupcol=col;

        while(row>=0 && col>=0){
            if(ds[row][col]=='Q')return false;
            row--;
            col--;
        }

        row=duprow;
        col=dupcol;

        while(col>=0){
            if(ds[row][col]=='Q')return false;
            col--;
        }
        row=duprow;
        col=dupcol;

        while(row<n && col>=0){
            if(ds[row][col]=='Q')return false;
            col--;
            row++;
        }

        return true;

    }
    void solve(int col,vector<string>&ds,vector<vector<string>>&ans,int n){
        if(col==n){
            ans.push_back(ds);
            return ;
        }

        for(int row=0;row<n;row++){
            if(is_safe(ds,row,col,n)){
                ds[row][col]='Q';
                solve(col+1,ds,ans,n);
                ds[row][col]='.';

            }

        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>ds(n);
        string s(n,'.');

        for(int i=0;i<n;i++){
            ds[i]=s;
        }
        solve(0,ds,ans,n);

        return ans;
    }
};