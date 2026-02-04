class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int up=0,down=0,maxi=0;
        for(int i=1;i<arr.size();i++){
            if(down>0 && arr[i]>arr[i-1] || arr[i]==arr[i-1]){
                up=down=0;
            }
            if(arr[i]>arr[i-1]){
                up++;
            }
            else{
                down++;
            }
            if(up>0 && down>0){
                maxi=max(maxi,up+down+1);
            }
        }
        return maxi;
    }
};