class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=0;i<nums.size();i++){
            if(ans[nums[i]]!=-1){
                ans[nums[i]]=-1;
            }
            else{
                return nums[i];
            }
            
        }
        return 0;

    }
};