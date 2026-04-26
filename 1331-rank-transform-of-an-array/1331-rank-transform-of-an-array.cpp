class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans=arr;
        vector<int>res;
        int rank=1;
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=rank;
                rank++;
            }           
        }
        for(int i=0;i<ans.size();i++){
            res.push_back(mp[ans[i]]);
        }
        return res;


    }
};