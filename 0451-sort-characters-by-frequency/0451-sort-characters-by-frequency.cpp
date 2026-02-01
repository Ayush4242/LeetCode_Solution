class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string str="";
        while(!pq.empty()){
            int f=pq.top().first;
            char t=pq.top().second;
            str.append(f,t);
            pq.pop();
        }
        return str;

    }
};