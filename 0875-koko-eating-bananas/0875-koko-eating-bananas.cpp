class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN,mini=INT_MAX;
        for(auto i:piles){
            maxi=max(maxi,i);
        }
        int low=1,high=maxi;
        while(low<=high){
            int mid=low + (high - low) / 2;
            long long c=0;
            for(int i=0;i<piles.size();i++){
                if(mid>piles[i]){
                    c++;
                }
                else{
                    c+=(piles[i]+mid-1)/mid;
                }
            }
            if(c<=h){
                mini=min(mini,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return mini;
    }
};