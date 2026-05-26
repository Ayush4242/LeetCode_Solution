class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int j=0,maxi=INT_MIN;
        while(j<nums.size()){
            sum+=nums[j];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
            
                
            
            j++;
        }
        return maxi==INT_MIN?-1:maxi;
    }
};