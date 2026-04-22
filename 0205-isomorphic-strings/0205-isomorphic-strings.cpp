class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=t[i];
        }
        for(int i=0;i<s.length();i++){
            mp1[t[i]]=s[i];
        }
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]!=t[i] || mp1[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};