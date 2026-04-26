class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,maxi=0,maxi1=0;
        unordered_map<char,int>mp;
        for(int j=0;j<s.length();j++){
            mp[s[j]]++;
            maxi=max(maxi,mp[s[j]]);
            while((j-i+1)-maxi>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            maxi1=max(maxi1,j-i+1);
        }
        return maxi1;





    }
};