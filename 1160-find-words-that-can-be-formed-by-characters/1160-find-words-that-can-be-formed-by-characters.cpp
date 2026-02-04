class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto i:chars){
            mp[i]++;
        }
        int c=0;

        for(auto i:words){
            bool b=true;
            unordered_map<char,int>mp1=mp;
            for(auto j:i){
                if(mp1[j]==0){
                    b=false;
                    break;
                }
                mp1[j]--;
            }
            if(b==true){
                c+=i.length();
            }

        }
        return c;
    }
};