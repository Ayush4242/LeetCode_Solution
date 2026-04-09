class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(auto i:s){
            if(!st.empty() && st.top().first==i){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
            else{
                st.push({i,1});
            }
        }
        string rem="";
        while(!st.empty()){
            rem.append(st.top().second,st.top().first);
            st.pop();
        }
        reverse(rem.begin(),rem.end());
        return rem;
    }
};