class Solution {
public:
    string frequencySort(string s) {        
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<pair<char,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string res="";
        while(!pq.empty()){
            int f=pq.top().first;
            char c=pq.top().second;
            res.append(f,c);
            pq.pop();
        }
        return res;
    }
};