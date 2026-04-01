class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,ans=0;
        for(auto i:nums){
            sum+=i;
            int rem=sum%k;
            // if(rem<0){
            //     rem+=k;
            // }
            ans+=mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};