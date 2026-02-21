class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        vector<int>res;
        while(!pq.size()<k){
            int f=pq.top().first;
            int ch=pq.top().second;
            res.push_back(ch);
            pq.pop();
            k--;
        }
        return res;

    }
};