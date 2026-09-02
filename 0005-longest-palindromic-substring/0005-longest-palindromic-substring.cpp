class Solution {
    private:
    int maxlen,start;
public:

    void expand(int i,int j,string& s){
        // int maxlen=1;
        int n=s.length();
        while(i>=0 && j<n && s[i]==s[j]){
            if(j-i+1>maxlen){
                maxlen=j-i+1;
                start=i;
            }
            i--;
            j++;
        }
    }
    string longestPalindrome(string s) {
        start=0,maxlen=1;
        for(int i=0;i<s.length();i++){
            expand(i,i,s);
        }
        for(int i=0;i<s.length();i++){
            expand(i,i+1,s);
        }
        return s.substr(start,maxlen);
        
    }
};