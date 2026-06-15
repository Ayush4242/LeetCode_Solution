class Solution {
public:
int func(vector<int>& weights, int days,int mid){
    int d=0,nd=1;
    for(int i=0;i<weights.size();i++){
        if(d+weights[i]>mid){
            nd++;
            d=weights[i];
        }
        else{
            d+=weights[i];
        }
    }
    return nd;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
        int l=maxi,high=sum,mini=INT_MAX;
        while(l<=high){
            int mid=(l+high)/2;
            int res=func(weights,days,mid);
            
            if(res<=days){
                mini=min(mini,mid);
                high=mid-1;
            }
            else{
                l=mid+1;            
            }
            
        }
        return mini;
    }
};