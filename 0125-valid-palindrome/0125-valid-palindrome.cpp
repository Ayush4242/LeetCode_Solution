class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto i:s){
            if(isalnum(i)){
                res+=tolower(i);
            }
        }
        string str=res;
        reverse(res.begin(),res.end());
        return res==str;


    }
};