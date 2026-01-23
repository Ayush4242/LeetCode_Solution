class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int t=pq.top();
            pq.pop();
            int st=pq.top();
            pq.pop();
            if(t==st){
                continue;
            }
            else{
                pq.push(t-st);
            }
        }
        return pq.empty()?0:pq.top();
    }
};