class Solution {
public:

    int numberOfSubarrays(vector<int>& nums, int k) {
        return calc(nums,k)-calc(nums,k-1);
    }
    int calc(vector<int>& nums, int k){
         int i=0,j=0,c=0,fc=0;
        while(j<nums.size()){
            if(nums[j]%2!=0){
                c++;
            }
            while(c>k){
                if(nums[i]%2!=0){
                    c--;
                }
                i++;
            }
            fc+=j-i+1;            
            j++;
        }
        return fc;
    }
    
       
};