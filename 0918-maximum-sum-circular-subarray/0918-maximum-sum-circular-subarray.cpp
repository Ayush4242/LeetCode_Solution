class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        int currmax=0,currmin=0,tot=0;
        for(auto i:nums){
            tot+=i;
            currmax=max(i,currmax+i);
            maxi=max(maxi,currmax);
            currmin=min(i,currmin+i);
            mini=min(mini,currmin);
            
        }
        if(maxi<0){
            return maxi;
        }
        return max(maxi,tot-mini);
    }
};