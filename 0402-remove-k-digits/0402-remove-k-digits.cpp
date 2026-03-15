class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()==k){
            return "0";
        }
        stack<char>st;
        for(int i=0;i<num.length();i++){
            while(!st.empty() && k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int i=0;
        while(res.length()>0 && res[0]=='0'){
            res.erase(res.begin());           
        }
        return res==""?"0":res;

    }
};