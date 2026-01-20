class Solution {
public:
    int vowelConsonantScore(string s) {
        int cv=0,cc=0;
        for(auto i:s){
            if(i=='a' || i=='e' | i=='i' || i=='o' || i=='u'){
                cv++;
            }
            else{
                if(i>='a' && i<='z'){
                    cc++;
                }
                
            }
        }
        if(cc>0){
            return floor(cv/cc);}
        else{
            return 0;
        }
    }
};