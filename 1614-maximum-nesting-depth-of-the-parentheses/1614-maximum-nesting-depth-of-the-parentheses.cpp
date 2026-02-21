class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int c=0,maxi=0;
        for(auto i:s){
            if(i=='('){
                st.push('(');
                c++;
                maxi=max(maxi,c);
            }
            if(i==')'){
                c--;
                st.pop();
            }
        }
        return maxi;
    }
};