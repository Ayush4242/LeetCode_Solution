class Solution {
public:
    int longestConsecutive(vector<int>& nums) {       
        unordered_map<int,int>mp;
        int maxi=0,c=0;
        for(auto i:nums){
            mp[i]++;
        }
        unordered_map<int,int>mp1;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-1)==mp.end()){
                c=1;
                int val=nums[i];
                while(mp1.find(nums[i])==mp1.end() && mp.find(val+1)!=mp.end()){
                    c++;
                    val++;
                    
                }
                maxi=max(maxi,c);
                mp1[nums[i]]++;
            }
        }
        return maxi;
    }
};