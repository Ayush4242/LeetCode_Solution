class Solution {
public:
    int minimumDeletions(string s) {
        if(s.length()==1){
            return 0;
        }
        int ca=0,cb=0,i=0,c=0;
        for(auto i:s){
            if(cb==0){
                if(i=='a'){
                    ca++;
                }
            }
            else{
                if(i=='a'){
                    c++;
                }
            }
            if(i=='b'){
                if(ca==0){
                    c++;
                }
                else{
                cb++;
                }
            }
        }
        return ca>0?c:0;
    }
};