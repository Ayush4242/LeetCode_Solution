class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int ca=0;
        for(auto i:s){
            if(i=='a'){
                ca++;
            }
            else if(i=='b'){
                ca--;
            }
        }
        return abs(ca);

    }
};