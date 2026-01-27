class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int c=0;
        for(auto i:s){
            if(st.empty() && i==')'){
                c++;
            }
            if(i=='('){
                st.push(i);
            }
            else{
                if(!st.empty() && i==')' && st.top()=='('){
                    st.pop();
                }
            }
            
        }
        return st.size()+c;
    }
};