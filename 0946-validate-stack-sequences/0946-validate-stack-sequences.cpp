class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // reverse(pushed.begin(),pushed.end());
        // int s = pushed.size();
        int j=0;
        stack<int>st;
        for(int i=0;i<pushed.size();i++){
            if(st.empty()){
                st.push(pushed[i]);
            }
            else{
                while(!st.empty() && j<popped.size() && st.top()==popped[j]){
                    j++;
                    st.pop();
                }               
                st.push(pushed[i]);
                
            }
        }
        while(!st.empty() && st.top()==popped[j]){
            j++;
            st.pop();
        }
        if(st.empty()){
            return true;
        }
        return false;

    }
};