class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int val=0;
        val=nums[nums.size()/2];       
        int sum=0;
        for(auto i:nums){
            sum+=abs(i-val);
        }
        return sum;
    }
};