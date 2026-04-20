class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0,j=colors.size()-1,maxi=0;
        while(i<colors.size()){
            if(colors[i]!=colors[j]){
                maxi=max(maxi,(j-i));
            }            
            i++;
        }
        i=0;
        while(j>0){
            if(colors[i]!=colors[j]){
                maxi=max(maxi,(j-i));
            }
            j--;
        }
        return maxi; 
    }
};