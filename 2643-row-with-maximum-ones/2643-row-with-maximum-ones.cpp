class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ind=-1,maxi=INT_MIN;
        for(int i=0;i<mat.size();i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            if(c>maxi){
                maxi=c;
                ind=i;
            }
        }
        vector<int>ans;
        ans.push_back(ind);
        ans.push_back(maxi);
        return ans;
    }
};