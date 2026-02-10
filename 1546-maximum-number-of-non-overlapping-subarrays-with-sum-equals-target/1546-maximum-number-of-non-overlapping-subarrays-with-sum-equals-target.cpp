class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        unordered_set<int>st;
        int sum=0,c=0;
        st.insert(0);
        for(auto i:nums){
            sum+=i;
            if(st.count(sum-target)){
                c++;
                sum=0;
                st.clear();
                st.insert(0);
            }
            else{
                st.insert(sum);
            }
        }
        return c;

    }
};