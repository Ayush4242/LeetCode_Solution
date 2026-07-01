class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<pair<int,int>>st;
        st.push({temperatures[n-1],n-1});
        vector<int>ans(n,0);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top().first<=temperatures[i]){
                st.pop();
            }
            if(!st.empty() && temperatures[i]<st.top().first){
                ans[i]=st.top().second-i;
            }
            st.push({temperatures[i],i});
        }
        return ans;

    }
};