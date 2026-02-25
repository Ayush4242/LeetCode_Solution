class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
        int n=x;
        long long  temp=0;
        int rem;
        while(x>0){
            rem=x%10;
            temp=temp*10+rem;
            x=x/10;
        }
        if(n==temp){
            return true;
        }
        else{
            return false;
        }
    }
    }
};