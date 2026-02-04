class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int res=abs(nums[i])-1;
            if(nums[res]>0){
                nums[res]=-nums[res];
            }
            else
                return abs(nums[i]);
            }
        
        
        return 0;
    }
};