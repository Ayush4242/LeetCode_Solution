class Solution {
public:
    string decodeString(string s) {
        string ans="";
        stack<char>st;
        for(auto i:s){
            if(i!=']'){
                st.push(i);
            }
            else{
                string ans="";
                while(!st.empty() && st.top()!='['){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(ans.begin(),ans.end());
                string num="";
                while(!st.empty() && isdigit(st.top())){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int k=stoi(num);
                while(k--){
                    for(auto i:ans){
                        st.push(i);
                    }
                }
            }
            
            
        }
        string res="";
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            reverse(res.begin(),res.end());
        return res;
    }
};