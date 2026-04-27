class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0){
            return 0;
        }
        int sum=0,maxi=INT_MIN;
        for(auto i:nums){
            sum+=i;
            if(sum<0){
                sum=0;
            }           
            maxi=max(maxi,sum);
            
        }
        return maxi>=0?maxi:-1;
    }
};