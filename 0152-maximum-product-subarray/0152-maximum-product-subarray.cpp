class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,suff=1,maxi=INT_MIN;
        for(auto i:nums){
            if(pre==0){
                pre=1;
            }
            pre=pre*i;           
            maxi=max(maxi,pre);
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(suff==0){
                suff=1;
            }
            suff=suff*nums[i];           
            maxi=max(maxi,suff);
        }
        return maxi;
    }
};