class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i:mp){
            pq.push(i.second);
        }
        while(!pq.empty() && k>0){
            int t=pq.top();
            pq.pop();
            t--;
            k--;
            if(t>0){
                pq.push(t);;
            }
            
            
        }
        return pq.size();

    }
};