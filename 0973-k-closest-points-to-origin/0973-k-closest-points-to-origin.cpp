class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {    
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<points.size();i++){
            int val=(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
            pq.push({{val},{points[i][0],points[i][1]}});
        }
        while(pq.size()>k){
            pq.pop();
        }
        vector<vector<int>>res1;
        
        while(!pq.empty()){
            vector<int>res;
            int st=pq.top().second.first;
            int sec=pq.top().second.second;
            res.push_back(st);
            res.push_back(sec);
            pq.pop();
            res1.push_back(res);
        }
        return res1;
    }
};