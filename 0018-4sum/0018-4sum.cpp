class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int j,k,l;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
            // j=i+1;
            if(j>i+1 && nums[j]==nums[j-1]){
                continue;
            }
            k=j+1;
            l=nums.size()-1;
            while(k<l){
                long long s=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                if(s<target){
                    k++;
                }
                else if(s>target){
                    l--;
                }
                else{
                    vector<int>triplet={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(triplet);
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]){
                        k++;
                    }
                    while(k<l && nums[l]==nums[l+1]){
                        l--;
                    }

                }
            }
            }
        }
        return ans;
    }
};