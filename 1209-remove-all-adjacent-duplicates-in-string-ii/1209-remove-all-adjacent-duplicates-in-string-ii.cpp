class Solution {
public:
    string removeDuplicates(string s, int k) {
         stack<char>st;
         map<char,int>mp;
         for(auto i:s){ 
            int val=k;           
            mp[i]++;
            st.push(i);
            if(mp[i]==val){
                while(val>0){
                    st.pop();
                    mp[i]--;
                    val--;
                }
                if(mp[i]==0){
                    mp.erase(i);
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