class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        bool b=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=i+1){
                b=false;
                return false;
            }
        }
        if(b==true && nums[nums.size()-1]==nums.size()-1){
            return true;
        }
        return false;
    }
};