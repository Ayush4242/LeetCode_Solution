class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string stres="";
        for(auto i:s){
           if(!st.empty() && abs(st.top()-i)==32){
                st.pop();
           } 
           else{
                st.push(i);
           }     
        }
        while(!st.empty()){
            stres+=st.top();
            st.pop();
        }
        reverse(stres.begin(),stres.end());
        return stres;

    }
};