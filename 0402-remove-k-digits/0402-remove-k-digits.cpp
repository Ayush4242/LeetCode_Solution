class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int i=0;
        while(i<num.size()){
            if(st.empty()){
                st.push(num[i]);
            }
            else{            
            if(k>0){
                while(!st.empty() && st.top()>num[i] && k>0){
                    st.pop();
                    k--;
                }
                
            }
            st.push(num[i]);
        }
        i++;
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
        while(res.size()>1 && res[0]=='0'){
            res.erase(res.begin());
        }
        return res==""?"0":res;
        
    }
};