class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>ans;
        for(int i=1;i<mountain.size();i++){
            if(i+1<mountain.size() && mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};