class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string str="";
        while(pq.size()>0){
            int fq=pq.top().first;
            int ch=pq.top().second;
            pq.pop();
            str.append(fq,ch);
        }
        return str;
    }
};