class Solution {
public:
    void dfs(vector<vector<int>>& image,int sr,int sc,int color,int ini){
        int n=image.size();
        int m=image[0].size();
        image[sr][sc]=color;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=sr+delrow[i];
            int ncol=sc+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==ini){
                dfs(image,nrow,ncol,color,ini);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int ini=image[sr][sc];
        if(ini==color) return image;
        dfs(image,sr,sc,color,ini);
        return image;
    }
    
};