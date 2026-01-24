class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto i:s){
            if((i>='a' && i<='z') || (i>='A' && i<='Z')){
                if(isalnum(i)){
                str+=tolower(i);
                }
            }
        }
        
        string res1=str;
        reverse(str.begin(),str.end());
        return str==res1;
    }
};