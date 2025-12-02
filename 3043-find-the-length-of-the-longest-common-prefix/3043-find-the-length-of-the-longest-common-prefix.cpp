class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>st;
        for(auto i:arr1){
            while(!st.count(i) && i>0){
                st.insert(i);
                i=i/10;
            }

        }
        int maxi=0;
        for(auto i:arr2){
            while(!st.count(i) && i>0){
                i=i/10;
            }
             if (i > 0) {  
            maxi=max(maxi,static_cast<int>(log10(i))+1);
             }
        }
        return maxi;
    }
};