class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        for(auto i:target){
            mp[i]++;
        }
        for(auto i:s){  
            if(mp.find(i)!=mp.end()){          
                mp1[i]++;
                
            }
        }
        int mini=INT_MAX;
        for(auto i:mp){
            int c=i.first;
            int count=i.second;
            int have=mp1[c];
            mini=min(mini,have/count);
        }
        return mini;
        

    }
};