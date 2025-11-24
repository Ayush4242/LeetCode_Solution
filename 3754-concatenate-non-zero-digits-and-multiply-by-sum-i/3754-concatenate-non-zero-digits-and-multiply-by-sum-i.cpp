class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string s=to_string(n);
        string s1="";
        long long sm=0;
        for(auto i:s){
            if(i!='0'){
                s1+=i;
                sm+=i-'0';
            }
        }
        long long res=stoll(s1);
        return res*sm;
    }
};