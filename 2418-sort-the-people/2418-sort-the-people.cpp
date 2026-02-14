class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>res;
        for(int i=0;i<names.size();i++){
            res.push_back({names[i],heights[i]});
        }
        sort(res.begin(),res.end(),[](const pair<string,int>&a,const pair<string,int>&b){
            return a.second>b.second;
        });
        vector<string>result;
        for(auto i:res){
            result.push_back(i.first);
        }
        return result;
    }
};