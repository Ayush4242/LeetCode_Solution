class Solution {
public:
    int numberOfPaths(int row,int col,int sum,vector<vector<int>>& grid, int k,  vector<vector<vector<int>>>& dp) {
        static const int MOD = 1000000007;
        int n=grid.size();
        int m=grid[0].size();
        if(row<0 || col<0){
            return 0;
        }
        if(row==0 && col==0){
            if((sum+grid[0][0])%k==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        if (dp[row][col][sum] != -1) {     
            return dp[row][col][sum];
        }
        int up=numberOfPaths(row-1,col,((sum+grid[row][col])%k),grid,k,dp);
        int down=numberOfPaths(row,col-1,((sum+grid[row][col])%k),grid,k,dp);
        return dp[row][col][sum]=(up+down)%MOD;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
       vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(m, vector<int>(k, -1))
        );
        return numberOfPaths(n-1,m-1,0,grid,k,dp);
    }
};