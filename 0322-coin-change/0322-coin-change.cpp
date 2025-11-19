class Solution {
public:
    int coinChange(int ind,vector<int>& coins, int amount, vector<vector<int>>&dp) {
        if(amount==0){
            return 0;
        }
        if(ind==0){
            if(amount%coins[0]==0){
                return amount/coins[0];
            }
            return 1e9;
        }
        if(dp[ind][amount]!=-1){
            return dp[ind][amount];
        }
        int ntake=coinChange(ind-1,coins,amount,dp);
        int take=1e9;
        if(coins[ind]<=amount){
            take=1+coinChange(ind,coins,amount-coins[ind],dp);
        }
        return dp[ind][amount]=min(take,ntake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=coinChange(n-1,coins,amount,dp);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};