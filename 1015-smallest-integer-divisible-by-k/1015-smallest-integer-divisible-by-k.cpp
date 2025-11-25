class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0){
            return -1;
        }
        int i=0,l=1;

        while(true){
            i=(i*10+1)%k;
            if(i==0){
                return l;
            }
            l++;
        }
        return l;

    }
};