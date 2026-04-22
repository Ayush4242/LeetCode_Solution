class Solution {
public:
    int maxDepth(string s) {
        int c=0,maxi=0;
        for(auto i:s){
            if(i=='('){
                c++;
                maxi=max(maxi,c);
            }
            if(i==')'){
                c--;
            }
        }
        return maxi;
    }
};