class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,maxi=0,c=0;
        unordered_map<char,int>mp;
        while(j<s.length()){
            mp[s[j]]++;
            if(s[j]=='a' || s[j]=='e'|| s[j]=='i' || s[j]=='o'||s[j]=='u'){
                c++;
            }
            if(j-i+1==k){
                maxi=max(maxi,c);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                    c--;
                }
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
                
            }
            j++;
        }
        return maxi;
    }
};