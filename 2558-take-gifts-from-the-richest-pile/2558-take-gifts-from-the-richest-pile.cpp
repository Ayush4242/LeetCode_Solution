class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto i:gifts){
            pq.push(i);
        }
        while(k>0){
            int top=pq.top();
            pq.pop();
            int res=floor(sqrt(top));
            pq.push(res);
            k--;       
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};