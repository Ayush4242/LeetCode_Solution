class Solution {
public:
    void dfs(vector<vector<int>>&grid,int row,int col,vector<vector<int>>&vis){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(grid,nrow,ncol,vis);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                dfs(grid,0,i,vis);
            }
            if(grid[n-1][i]==1){
                dfs(grid,n-1,i,vis);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){ 
                dfs(grid,i,0,vis);
            }
            if(grid[i][m-1]==1){
                dfs(grid,i,m-1,vis);
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    c++;
                }
            }
        }
        return c;
        
    }
};