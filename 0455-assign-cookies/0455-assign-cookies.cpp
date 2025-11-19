class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0,c=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<s.size() && j<g.size()){
            if(s[i]>=g[j]){
                c++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return c;
    }
    
};