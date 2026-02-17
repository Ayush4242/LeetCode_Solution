class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int>mp;
        // unordered_map<char,int>mp1;
        int i=0,j=0,maxi=0,c=0;
        while(j<s.length()){
            if(s[j]=='a' || s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                mp[s[j]]++;
                c++;
                
            }
            while(j-i+1>k){
                if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    mp[s[i]]--;
                    c--;
                }
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            maxi=max(maxi,c);
            j++;
        }
        return maxi;
    }
};