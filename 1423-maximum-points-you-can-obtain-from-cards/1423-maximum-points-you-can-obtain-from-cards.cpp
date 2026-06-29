class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int s=0,maxi=INT_MIN;
        for(int i=0;i<k;i++){
            s+=cardPoints[i];
            maxi=max(maxi,s);
        }
        int po=n-1;
       for(int i=k-1;i>=0;i--){
            s-=cardPoints[i];
            s+=cardPoints[po];
            po--;
            maxi=max(maxi,s);
       }
        return maxi;
       
    }
};