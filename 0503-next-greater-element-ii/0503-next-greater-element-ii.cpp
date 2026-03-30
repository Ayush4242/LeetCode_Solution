class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>res;
        for(auto i:nums){
            res.push_back(i);
        }
        for(auto i:nums){
            res.push_back(i);
        }
        vector<int>ans(res.size(),1);
        stack<int>st;
        for(int i=res.size()-1;i>=0;i--){
            while(!st.empty() && res[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            st.push(res[i]);
        }
        vector<int>ans1(nums.size());
        for(int i=0;i<nums.size();i++){
            ans1[i]=ans[i];
        }
        return ans1;
    }
};