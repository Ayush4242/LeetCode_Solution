class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int j=0,sum=0,maxi=0,c=0;
        mp[0]=1;
        while(j<nums.size()){
            sum+=nums[j];
            if(mp.find(sum-k)!=mp.end()){
                c+=mp[sum-k];
                maxi=max(maxi,c);
            }
            j++;
            mp[sum]++;
        }
        return maxi;


    }
};