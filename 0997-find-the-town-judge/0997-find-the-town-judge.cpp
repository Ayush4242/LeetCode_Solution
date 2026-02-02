class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<trust.size();i++){
            int from=trust[i][0];
            int to=trust[i][1];
            mp1[from]++;
            mp2[to]++;
        }  
        for(int i=1;i<=n;i++){
            if(mp2[i]==n-1 && mp1[i]==0){
                return i;
            }
        }  
        return -1;
    }
};