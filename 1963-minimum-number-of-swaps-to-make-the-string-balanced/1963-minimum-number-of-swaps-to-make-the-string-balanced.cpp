class Solution {
public:
    int minSwaps(string s) {
        int bal=0,imb=0;
        for(auto i:s){
            if(i=='['){
                bal++;
            }
            else{
                if(i==']' && bal>0){
                    bal--;
                }
                else{
                    imb++;
                }
            }
        }
        return (imb+1)/2;
    }
};