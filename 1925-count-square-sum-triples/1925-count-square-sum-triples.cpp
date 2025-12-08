class Solution {
public:
    int countTriples(int n) {
        int l=1;
        vector<int>ans;
        while(l<=n){
            ans.push_back(l);
        l++;
        }
        int i=0,j=0,k=0,c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(ans[i]!=ans[j] && ans[i]!=ans[k] && ans[j]!=ans[k]){
                        if(ans[i]*ans[i]+ans[j]*ans[j]==ans[k]*ans[k]){
                            c++;
                        }
                    }
                }
            }
        }
        return c;
    }
};