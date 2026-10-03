class Solution {
public:
    int rob(int ind,vector<int>&nums,vector<int>&dp){
        int take=0;
        int nontake=0;
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
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            if(i!=0){
                v1.push_back(nums[i]);
            }
            if(i!=n-1){
                v2.push_back(nums[i]);
            }
        }
        vector<int>dp1(v1.size(),-1);
        vector<int>dp2(v2.size(),-1);
        int a=rob(v1.size()-1,v1,dp1);
        int b=rob(v2.size()-1,v2,dp2);
        return max(a,b);
    }
};