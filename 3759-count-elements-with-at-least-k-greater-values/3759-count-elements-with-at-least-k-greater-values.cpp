class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        if(k==0){           
            return nums.size();           
        }
        int c=0,great=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int idx=upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            great=nums.size()-idx;
            if(great>=k){
                c++;
            }
        }
        return c;
        
    }
};