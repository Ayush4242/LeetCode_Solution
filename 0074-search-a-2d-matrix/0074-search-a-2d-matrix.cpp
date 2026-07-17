class Solution {
public:
    bool func(vector<int>row,int target){
        int l=0,h=row.size()-1,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(row[mid]==target){
                return true;
            }
            else if(row[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            if(func(matrix[i],target)==true){
                return true;
            }
        }
        return false;
    }
};