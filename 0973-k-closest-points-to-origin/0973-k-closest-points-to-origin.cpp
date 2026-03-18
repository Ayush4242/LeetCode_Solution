class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue< pair<int, vector<int>>,vector<pair<int, vector<int>>>,greater<pair<int, vector<int>>>> pq;
        for(auto i:points){
            int one=i[0];
            int two=i[1];
            int res=(one*one+two*two);
            pq.push({res,i});
        }
        vector<vector<int>>res;
        while(k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
        
    }
};