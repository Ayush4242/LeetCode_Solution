class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto i:s){
            if(isalpha(i)){
                str+=tolower(i);
            }
        }
        string str1=str;
        reverse(str.begin(),str.end());
        return (str1==str);
    }
};