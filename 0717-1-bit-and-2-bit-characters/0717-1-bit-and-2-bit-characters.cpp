class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        int n=bits.size();
        while(i<bits.size()-1){
            if(bits[i]==1){
                i+=2;
            }
            else{
                i+=1;
            }
        }
        if(i==n-1){
            return true;
        }
        return false;
    }
};