class Solution {
public:
    int countCollisions(string directions) {
        int c=0;
        int i=0,j=directions.length()-1;
        while(i<directions.length() && directions[i]=='L'){
            i++;
        }
        while(j>=0 && directions[j]=='R'){
            j--;
        }
        for(int k=i;k<=j;k++){
            if(directions[k]=='R' || directions[k]=='L'){
                c++;
            }
        }
        return c;
    }
};