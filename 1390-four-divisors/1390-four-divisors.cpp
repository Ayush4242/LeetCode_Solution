class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalsum=0;
        for(auto i:nums){
            int c=0,s=0;
            for(int j=1;j*j<=i;j++){
                if(i%j==0){
                    c++;
                    s+=j;
                    if(j!=i/j){
                        c++;
                        s+=(i/j);
                    }
                }
                if(c>4){
                    break;
                }

            }
            if(c==4){
                totalsum+=s;
            }
        }
        return totalsum;
    }
};