class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],maxi=0,profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]-mini>maxi){
                maxi=max(maxi,prices[i]-mini);
            }
            mini=min(mini,prices[i]);

        }
        return maxi;

    }
};