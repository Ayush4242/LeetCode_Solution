class Solution {
public:
    string minWindow(string s, string t) {
        int ind = -1, mini = INT_MAX;
        unordered_map<char,int> mp;

        for(auto i : t){
            mp[i]++;
        }

        int i = 0, j = 0, c = 0;

        while(j < s.length()){
            if(mp.find(s[j]) != mp.end()){
                if(mp[s[j]] > 0){
                    c++;
                }
                mp[s[j]]--;
            }

            while(c == t.length()){
                if(j - i + 1 < mini){
                    mini = j - i + 1;
                    ind = i;
                }

                if(mp.find(s[i]) != mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]] > 0){
                        c--;
                    }
                }
                i++;
            }
            j++;
        }

        return (ind == -1) ? "" : s.substr(ind, mini);
    }
};