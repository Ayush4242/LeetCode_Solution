class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto i:s){
            if(isalnum(i)){
                str+=tolower(i);
            }
        }
        string ch=str;
        reverse(ch.begin(),ch.end());
        return ch==str;
    }
};