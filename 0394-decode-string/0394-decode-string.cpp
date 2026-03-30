class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        
        for(auto i:s){
            if(i!=']'){
                st.push(i);
            }
            else{
                string res="";
                string ans="";
                while(!st.empty() && st.top()!='['){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(ans.begin(),ans.end());
                string val="";
                while(!st.empty() && isdigit(st.top())){
                    val+=st.top();
                    st.pop();
                }
                reverse(val.begin(),val.end());
                // string res="";
                int dig=stoi(val);
                while(dig--){
                    res+=ans;
                }
                for(auto i:res){
                    st.push(i);
                }
            }
        }
        string res1="";
        while(!st.empty()){
            res1+=st.top();
            st.pop();
        }
        reverse(res1.begin(),res1.end());
        return res1;
    }
};