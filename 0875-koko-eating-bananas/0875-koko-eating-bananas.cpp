class Solution {
public:
long long find(vector<int>& piles, int hour){
    long long total=0;
    for(auto i:piles){
        total+=ceil((double)i/(double)hour);
    }
    return total;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(auto i:piles){
            maxi=max(maxi,i);
        }
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            long long res=find(piles,mid);
            if(res<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};