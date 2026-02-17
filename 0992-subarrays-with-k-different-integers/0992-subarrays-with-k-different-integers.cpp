class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return check(nums,k)-check(nums,k-1);
    }
    int check(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int i=0,j=0,sum=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(mp.size()>k){
                mp[nums[i]]--;
                if(mp[nums[i]]<1){
                    mp.erase(nums[i]);
                }
                i++;
            }
            sum+=(j-i+1);
            j++;
        }
        return sum;
    }
};