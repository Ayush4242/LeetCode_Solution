class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        int i=0,j=0;
        vector<int>res;
        while(j<nums.size()){
            // if(dq.empty()){
            //     dq.push_back(nums[j]);
            // }
            // dq.push_back(nums[j]);
            while(!dq.empty() && nums[j]>dq.back()){
                dq.pop_back();
            }
            dq.push_back(nums[j]);
            if(j-i+1==k){
                res.push_back(dq.front());
                if(nums[i]==dq.front()){
                    dq.pop_front();
                }
                i++;
            }
            
            j++;

        }
        return res;
    }
};