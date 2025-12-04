class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<pair<char,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](auto &a, auto &b){
           if(a.second==b.second){
             return a.first<b.first;
           }
           return a.second>b.second;
        });
        string ans="";
        for(auto i:vec){
            ans.append(i.second,i.first);
        }
        return ans;
    }
};