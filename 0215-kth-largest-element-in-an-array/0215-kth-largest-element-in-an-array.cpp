class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        // for(int i=0;i<k;i++){
        //     pq.push(nums[i]);
        // }
        // for(int i=k;i<nums.size();i++){
        //     if(nums[i]>pq.top()){
        //         pq.pop();
        //         pq.push(nums[i]);
        //     }
        // }
        // int ans=pq.top();
        // return ans;
        for(auto i:nums){
            pq.push(i);
            while(pq.size()>k){
                pq.pop();
            }
        }
        // while(!pq.empty() && k==1){
        //     pq.pop();
        // }
        return pq.top();

    }
};