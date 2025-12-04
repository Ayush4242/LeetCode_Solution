class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto i:asteroids){
            if(i>0){
                st.push(i);
            }
            else{
                while(!st.empty() && st.top()>0 &&st.top()<abs(i) ){
                    st.pop();
                }
            
            if(!st.empty() && st.top()==abs(i)){
                st.pop();
            }
            else{
                if(st.empty() || st.top()<0){
                    st.push(i);
                }
            }
            }
        }
        vector<int>vec;
        while(!st.empty()){
            vec.push_back(st.top());
            st.pop();
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};