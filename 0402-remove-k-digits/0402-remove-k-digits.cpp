class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()==k){
            return "0";
        }
        stack<char>st;
        for(int i=0;i<num.size();i++){
            while(!st.empty() && st.top()-'0'>num[i]-'0' && k>0){
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
        while(res.size()>0 && res[0]=='0'){
            res.erase(res.begin());
        }
        
        return res.empty()?"0":res;

        
        
    }
};