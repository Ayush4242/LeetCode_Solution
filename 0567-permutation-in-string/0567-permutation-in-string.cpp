class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0),freq2(26,0);
        for(auto i:s1){
            freq1[i-'a']++;
        }
        int i=0,j=0;
        while(j<s2.length()){
            freq2[s2[j]-'a']++;
            while(j-i+1>s1.length()){
                freq2[s2[i]-'a']--;
                i++;
            }
            if(freq1==freq2){
                return true;
            }
            j++;
        }
        return false;
    }
};