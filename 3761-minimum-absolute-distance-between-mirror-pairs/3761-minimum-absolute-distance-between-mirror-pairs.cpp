class Solution {
public:
    int reverse(int n){
        int val=0;
        while(n>0){
            val=val*10+n%10;
            n=n/10;
        }
        return val;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        
        int mini=INT_MAX;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int val=reverse(nums[i]);
            if(mp.find(nums[i])!=mp.end()){
                mini=min(mini,abs(i-mp[nums[i]]));
            }
            
            mp[val]=i;
            
        }
        return mini == INT_MAX ? -1 : mini;
    }
};