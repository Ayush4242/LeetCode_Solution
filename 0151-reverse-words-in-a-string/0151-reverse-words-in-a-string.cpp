class Solution {
public:
    string reverseWords(string s) {
        string res="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            string str="";
            while(i<s.length() && s[i]!=' '){
                str+=s[i];
                i++;
            }
            reverse(str.begin(),str.end());
            if(str.size()>0){
                res+=" "+str;
            }
            
        }
        return res.substr(1,res.size()-1);
    }
};