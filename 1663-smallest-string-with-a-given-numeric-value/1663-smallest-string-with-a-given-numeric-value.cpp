class Solution {
public:
    string getSmallestString(int n, int k) {
        string str="";
        str.append(n,'a');
        k=k-n;
        for(int i=str.length()-1;i>=0;i--){
            if(k==0){
                break;
            }
            int add=min(25,k);
            str[i]='a'+add;
            k-=add;
        }
        return str;
    }
};