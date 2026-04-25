class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,blank=0;
        for(auto i:moves){
            if(i=='R'){
                r++;
            }
            if(i=='L'){
                r--;
            }
            if(i=='_'){
                blank++;
            }
        }
        if(r>0){
            return r+blank;
        }
        return abs(r)+blank;

    }
};