class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(auto i:text){
            mp[i]++;
        }
        int res=INT_MAX;
        res=min(res,mp['b']);
        res=min(res,mp['a']);
        res=min(res,mp['l']/2);
        res=min(res,mp['o']/2);
        res=min(res,mp['n']);
        return res;

    }
};