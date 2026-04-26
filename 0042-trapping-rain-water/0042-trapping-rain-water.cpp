class Solution {
public:
vector<int>leftmax(vector<int>& height){
    vector<int>prefixmax(height.size());
    prefixmax[0]=height[0];
    for(int i=1;i<height.size();i++){
        if(prefixmax[i-1]>height[i]){
            prefixmax[i]=prefixmax[i-1];
        }
        else{
            prefixmax[i]=height[i];
        }        
    }
    return prefixmax;
}
vector<int>rightmax(vector<int>& height){
    vector<int>suffixmax(height.size());
    suffixmax[height.size()-1]=height[height.size()-1];
    for(int i=height.size()-2;i>=0;i--){
        if(suffixmax[i+1]>height[i]){
            suffixmax[i]=suffixmax[i+1];
        }
        else{
            suffixmax[i]=height[i];
        }
    }
    return suffixmax;
}
    int trap(vector<int>& height) {
        vector<int>prefixmax=leftmax(height);
        vector<int>suffixmax=rightmax(height);
        int total=0;
        for(int i=0;i<height.size();i++){
            if(height[i]<prefixmax[i] && height[i]<suffixmax[i]){
                total+=min(prefixmax[i],suffixmax[i])-height[i];
            }
        }
        return total;
    }
    
};