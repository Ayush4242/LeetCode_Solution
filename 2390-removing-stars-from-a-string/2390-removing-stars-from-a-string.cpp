class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(auto i:s){
            if(!st.empty() && i=='*'){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};