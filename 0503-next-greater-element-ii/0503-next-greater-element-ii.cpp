class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        stack<int>st;
        vector<int>res;
        for(int i=ans.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=ans[i]){
                st.pop();
            }
            if(st.empty()){
                res.push_back(-1);
            }
            else{
                res.push_back(st.top());
            }
            st.push(ans[i]);
        }
        reverse(res.begin(),res.end());
        vector<int>res1;
        for(int i=0;i<nums.size();i++){
            res1.push_back(res[i]);
        }
        return res1;
    }
};