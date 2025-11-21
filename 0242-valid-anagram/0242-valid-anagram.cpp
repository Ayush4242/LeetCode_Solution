class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(s==t){
        return true;
       }
       else{
        return false;
       }
    // map<char,int>mp;
    // for(auto i:s){
    //     mp[i]++;
    // }
    // for(auto i:t){
    //     mp[i]--;
    //     if(mp[i] == 0) {
    //     mp.erase(i);  // remove entry completely
    // }
    // }
    // if(mp.size()==0){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    }
};