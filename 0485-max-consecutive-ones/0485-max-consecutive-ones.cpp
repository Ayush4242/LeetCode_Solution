class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,maxi=0;
        // if(nums.size()==1){
        //     if(nums[0]==0){
        //         return 0;
        //     }
        // }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
                maxi=max(maxi,c);
            }
            else{
                c=0;
            }
        }
        return maxi;
    }
};