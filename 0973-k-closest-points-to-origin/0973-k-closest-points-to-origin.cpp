class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<>> pq;
        for(auto i:points){
            int sum=i[0]*i[0]+i[1]*i[1];
            pq.push({sum,i});
        }
        vector<vector<int>> res;
        while(!pq.empty() && k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};