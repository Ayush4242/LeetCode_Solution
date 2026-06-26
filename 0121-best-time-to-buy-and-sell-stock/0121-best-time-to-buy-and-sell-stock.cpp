class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],pro=0,maxi=0;
        for(int i=1;i<prices.size();i++){
            pro=prices[i]-mini;
            maxi=max(maxi,pro);
            mini=min(mini,prices[i]);
        }
        return maxi;
    }
};