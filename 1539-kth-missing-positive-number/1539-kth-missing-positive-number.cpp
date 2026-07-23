class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxi=arr[arr.size()-1];
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        int tar=k;
        int val=0;
        for(int i=1;i<=maxi;i++){
            if(mp.find(i)==mp.end() && k>0){
                k--;
                val=i;
            }
        }
        if(k>0){
            return maxi+k;
        }
        return val;

    }
};