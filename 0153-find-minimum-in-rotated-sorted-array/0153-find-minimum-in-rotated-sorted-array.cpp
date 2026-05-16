class Solution {
public:
    int findMin(vector<int>& nums) {
        // int mini=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     mini=min(mini,nums[i]);
        // }
        // return mini;
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1,mini=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[low]){
                mini=min(mini,nums[low]);
                low=mid+1;
            }
            else{
                mini=min(mini,nums[mid]);
                high=mid-1;
            }
        }
        return mini;
    }
};