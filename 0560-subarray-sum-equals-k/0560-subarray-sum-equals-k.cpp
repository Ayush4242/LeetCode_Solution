class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,presum=0,c=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            presum=sum-k;
            if(mp.find(presum)!=mp.end()){
                c+=mp[presum];
            }
            
            mp[sum]++;
            
        }
        return c;

    }
};