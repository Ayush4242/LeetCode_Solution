class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // int j=1;
        string res="";
        for(int i=0;i<strs[0].size();i++){
            int ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size() || strs[j][i]!=ch){
                    return res;
                }
                
            }
            res+=ch;
        }
        return res;
    }
};