class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int presum=0,c=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int rem=presum-k;
            c+=mp[rem];
            mp[presum]+=1;

        }
        return c;
    }
};