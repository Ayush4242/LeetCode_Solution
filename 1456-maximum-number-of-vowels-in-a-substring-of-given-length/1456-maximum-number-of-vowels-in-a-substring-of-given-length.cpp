class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,cv=0,maxi=INT_MIN;
        while(j<s.length()){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' ||s[j]=='u'){
                cv++;
            }
            maxi=max(maxi,cv);
            while(j-i+1==k){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                    cv--;
                }
                i++;
            }
            
            j++;
        }
        return maxi;
    }
};