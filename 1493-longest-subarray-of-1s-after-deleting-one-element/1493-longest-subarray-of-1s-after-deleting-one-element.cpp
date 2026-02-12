class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int target=1,maxi=0;
        while(j<nums.size()){
            if(nums[j]==0){
                target--;
            }
            while(target<0){
                if(nums[i]==0){
                    target++;
                    
                }
                i++;
                
            }
            maxi=max(maxi,j-i);
            j++;
        }
        return maxi;
    }
};