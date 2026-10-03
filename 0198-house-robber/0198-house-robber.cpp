class Solution {
public:
    int rob(int ind,vector<int>& nums,vector<int>&dp ) {
        int take=0;
        int nontake=0;
        if(ind==0){
            return nums[ind];
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        take=nums[ind]+rob(ind-2,nums,dp);
        nontake=rob(ind-1,nums,dp);
        return dp[ind]=max(take,nontake);
    }
    int rob(vector<int>&nums){
        int num=nums.size();
        vector<int>dp(num,-1);
        return rob(num-1,nums,dp);
    }

};