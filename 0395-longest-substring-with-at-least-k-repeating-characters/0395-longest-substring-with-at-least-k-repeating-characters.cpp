class Solution {
public:
int helper(string s,int k){
    if(s.length()<k){
        return 0;
    }
    unordered_map<int,int>mp;
    for(auto i:s){
        mp[i]++;
    }
    for(int i=0;i<s.length();i++){
        if(mp[s[i]]<k){
            int left=helper(s.substr(0,i),k);
            int right=helper(s.substr(i+1),k);
            return max(left,right);
        }
    }
    return s.size();
}
    int longestSubstring(string s, int k) {
        return helper(s,k);
        
    
    }
};