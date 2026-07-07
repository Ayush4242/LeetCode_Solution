class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1){
            return 1;
        }
        priority_queue<int>pq;
        for(auto i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int fir=pq.top();
            pq.pop();
            int sec=pq.top();
            pq.pop();
            if(fir!=sec){
                pq.push(abs(fir-sec));
            }
        }
        return pq.empty()?0:pq.top();
    }
};