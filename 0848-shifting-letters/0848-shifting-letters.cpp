class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<long long>suffix(s.length(),0);
        suffix[s.length()-1]=shifts[s.length()-1];
        for(int i=s.length()-2;i>=0;i--){
            suffix[i]=suffix[i+1]+shifts[i];
        }
        string res="";
        for(int i=0;i<s.length();i++){
            int pos=((s[i]-'a')+suffix[i])%26;
            char newpos=(pos+'a');
            res+=newpos;
        }
        return res;
    }
};