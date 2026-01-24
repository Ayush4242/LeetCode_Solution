class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty() && k>0){
            int f=pq.top().first;
            int c=pq.top().second;
            res.push_back(c);
            k--;
            pq.pop();

        }
        return res;
    }
};