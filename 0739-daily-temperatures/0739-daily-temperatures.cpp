class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>res;
       for(int i=temperatures.size()-1;i>=0;i--){
            if(st.empty()){
                res.push_back(0);
            }
            else{
                while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                    st.pop();
                }
                if(!st.empty()){
                     res.push_back(st.top()-i);
                }
                else{
                    res.push_back(0);
                }
                
            }
            st.push(i);
       }
       reverse(res.begin(),res.end());
       return res;
    }
};