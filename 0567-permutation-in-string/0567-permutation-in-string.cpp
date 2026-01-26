class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool b=false;
        int i=0,j=0;
        vector<int>frqs1(26,0),frqs2(26,0);
        for(auto i:s1){
            frqs1[i-'a']++;
        }
        while(j<s2.length()){
            frqs2[s2[j]-'a']++;
            while(j-i+1>s1.length()){
                frqs2[s2[i]-'a']--;
                i++;
            }
            if(frqs1==frqs2){
                return true;
            }
            j++;
        }
        return false;
    }
};