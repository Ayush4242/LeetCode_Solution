class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mps;
        unordered_map<char,int>mpt;
        for(int i=0;i<s.length();i++){
            if(mps.find(s[i])==mps.end()){
                mps[s[i]]=t[i];
            }
            else{
                if(mps[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        for(int i=0;i<t.length();i++){
            if(mpt.find(t[i])==mpt.end()){
                mpt[t[i]]=s[i];
            }
            else{
                if(mpt[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};