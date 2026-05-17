class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;
        int c=1;
        for(auto i:s){
            if(st.find(i)!=st.end()){
                c++;
                st.clear();
            }
            
            st.insert(i);
            
        }
        return c;
        

    }
};