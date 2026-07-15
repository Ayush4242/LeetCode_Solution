class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                ans.push_back(mp[rem]);
                ans.push_back(i);
                break;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return ans;
        // vector<pair<int,int>>ans;
        // for(int i=0;i<nums.size();i++){
        //     ans.push_back({nums[i],i});
        // }
        // sort(ans.begin(),ans.end());
        // int i=0,j=ans.size()-1;
        // vector<int>res;
        // while(j>=i){
        //     int sum=ans[i].first+ans[j].first;
        //     if(sum==target){
        //         res.push_back(ans[i].second);
        //         res.push_back(ans[j].second);
        //         break;
        //     }
        //     if(sum>target){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return res;
        
    }
};