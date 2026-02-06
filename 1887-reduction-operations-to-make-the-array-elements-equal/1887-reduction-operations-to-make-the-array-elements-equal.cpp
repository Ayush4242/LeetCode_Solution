class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int sum=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            while(nums[i]==nums[i+1]){
                i++;
            }
            sum+=n-i-1;
        }
        return sum;
    }
};