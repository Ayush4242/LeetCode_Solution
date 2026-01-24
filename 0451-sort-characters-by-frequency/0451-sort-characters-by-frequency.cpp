class Solution {
public:
    string frequencySort(string s) {
        string str="";
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            int freq=pq.top().first;
            char c=pq.top().second;
            pq.pop();
            str.append(freq,c);
        }
        return str;
    }
};