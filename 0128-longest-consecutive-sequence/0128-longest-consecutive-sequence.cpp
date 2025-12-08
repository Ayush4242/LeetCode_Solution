class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int c=1,maxi=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                c++;
                maxi=max(maxi,c);
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                c=1;
            }
        }
        return maxi;
    }
};