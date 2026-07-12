class Solution {
public:
    bool checkValidString(string s) {
        stack<int>bra;
        stack<int>sta;
        int i=0;
        while(i<s.length()){
            if(s[i]=='('){
                bra.push(i);
            }
            else if(s[i]=='*'){
                sta.push(i);
            }
            else{
                if(!bra.empty()){
                    bra.pop();
                }
                else if(!sta.empty()){
                    sta.pop();
                }
                else{
                    return false;
                }
            }
            i++;
        }
        while(!sta.empty() && !bra.empty()){
            if(sta.top()<bra.top()){
                return false;
            }
            else{
                sta.pop();
                bra.pop();
            }
            
        }
        return bra.empty()?true:false;
    }
};