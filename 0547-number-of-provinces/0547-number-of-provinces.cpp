class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<vector<int>>& adjls,int node,vector<int>&vis){
        vis[node]=1;
        for(auto i:adjls[node]){
            if(!vis[i]){
                dfs(isConnected,adjls,i,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<vector<int>>adjls(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);int c=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                c++;
                dfs(isConnected,adjls,i,vis);
            }
        }
        return c;
    }
};