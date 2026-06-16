class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto i:word1){
            mp1[i]++;
        }
        for(auto i:word2){
            mp2[i]++;
        }
        for(auto i:mp1){
            if(mp2.find(i.first)==mp2.end()){
                return false;
            }
        }
        vector<int>ans1;
        vector<int>ans2;
        for(auto i:mp1){
            ans1.push_back(i.second);
        }
        for(auto i:mp2){
            ans2.push_back(i.second);
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        return ans1==ans2;
    }
};