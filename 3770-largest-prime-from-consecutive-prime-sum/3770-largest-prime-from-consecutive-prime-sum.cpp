class Solution {
public:
    int largestPrime(int n) {
        vector<int>prime(n+1,1);
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        }
        vector<int>primes;
        for(int i=2;i<=n;i++){
            if(prime[i]==1){
                primes.push_back(i);
            }
        }
        int s=0;
        int ans=0;
        for(auto i:primes){
            s+=i;
            if(s>n){
                break;
            }
            if(prime[s]==1){
                ans=s;
            }
            
        }
        return ans;
    }
};