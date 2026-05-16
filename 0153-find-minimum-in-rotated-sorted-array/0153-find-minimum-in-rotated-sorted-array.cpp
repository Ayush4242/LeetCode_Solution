class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1,mid,mini=INT_MAX;
        if(nums.size()==1){
            return nums[0];
        }
        while(l<=h){
        mid=(l+h)/2;
        if(nums[l]<=nums[mid]){
            mini=min(mini,nums[l]);
            l=mid+1;
        }
        else{
            
            mini=min(mini,nums[mid]);
            h=mid-1;
        }
    }
        return mini;
    }
};