class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(auto i:arr1){
            mp[i]++;
        }
        vector<int>res;
        for(auto i:arr2){
            if(mp.find(i)!=mp.end()){
                while(mp[i]>0){
                    res.push_back(i);
                    mp[i]--;
                }                
            }
        }
        vector<int>rest;
        for(auto i:mp){
            if(i.second>0){
                while(i.second>0){
                    rest.push_back(i.first);
                    i.second--;
                }
            }            
        }
        sort(rest.begin(),rest.end());
        res.insert(res.end(),rest.begin(),rest.end());
        return res;
    }
};