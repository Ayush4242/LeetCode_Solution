class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0,j=0;
        long long sum=0,maxi=0;
        unordered_map<int,int>mp;
        while(j<nums.size()){
            sum+=nums[j];
            mp[nums[j]]++;
            while(mp[nums[j]]>1){
                sum-=nums[i];
                mp[nums[i]]--;
                i++;
            }
            
            if(k==j-i+1){
                maxi=max(maxi,sum);
                sum-=nums[i];
                mp[nums[i]]--;
                i++;
            }
            j++;
            
        }
        return maxi;
    }
};