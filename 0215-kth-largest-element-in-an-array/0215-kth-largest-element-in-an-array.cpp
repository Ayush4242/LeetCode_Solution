class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i:nums){
            pq.push(i);
        }
        while(!pq.empty() && k>1){
            int top=pq.top();
            pq.pop();
            k--;
        }
        return pq.top();
    }
};