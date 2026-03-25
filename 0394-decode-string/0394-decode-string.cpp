class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(auto i:s){
            if(i!=']'){
                st.push(i);
            }
            else{
                string curr="";
                while(!st.empty() && st.top()!='['){
                    curr+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(curr.begin(),curr.end());
                string num="";
                while(!st.empty() && isdigit(st.top())){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int k=stoi(num);
                while(k--){
                    for(auto i:curr){
                        st.push(i);
                        // k--;
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