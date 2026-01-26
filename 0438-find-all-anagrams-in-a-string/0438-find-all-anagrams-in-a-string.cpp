class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i=0,j=0;
        vector<int>res;
        vector<int>freqp(26,0),freqs(26,0);
        for(auto i:p){
            freqp[i-'a']++;
        }
        while(j<s.length()){
            freqs[s[j]-'a']++;
            if(j-i+1>p.length()){
                freqs[s[i]-'a']--;
                i++;
            }
            if(freqs==freqp){
                res.push_back(i);
            }
            j++;
        }
        return res;
    }
};