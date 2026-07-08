class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,int>>pq;
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string str="";
        while(!pq.empty()){
            char ch=pq.top().second;
            int num=pq.top().first;
            str.append(num,ch);
            pq.pop();
        }
        return str;
    }
};