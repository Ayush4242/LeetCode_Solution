class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res=0;
        set<char>st1;
        for(auto i:s){
            st1.insert(i);
        }
        for(auto j:st1){
            int left=-1,right=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]==j){
                    if(left==-1){
                        left=i;
                    }
                    else{
                        right=i;
                    }
                }
            }
            set<int>st2;
            for(int k=left+1;k<=right-1;k++){
                st2.insert(s[k]);
            }
            res+=st2.size();
        }
        return res;
    }
};