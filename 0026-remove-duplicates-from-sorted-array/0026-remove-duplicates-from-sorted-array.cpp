class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int prev=nums[0];
        int i=0;
        int j=i;
        int c=1;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                // i=i+1;
                swap(nums[i+1],nums[j]);
                c++;
                i=i+1;
            }
            j++;
        }
        // cout<<c;
        return c;    
    }
};