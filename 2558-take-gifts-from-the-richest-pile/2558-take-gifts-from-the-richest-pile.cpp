class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto i:gifts){
            pq.push(i);
        }
        while(!pq.empty() && k>0){
            int t=pq.top();
            pq.pop();
            k--;
            pq.push(sqrt(t));
        }
        long long s=0;
        while(!pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        return s;
    }
};