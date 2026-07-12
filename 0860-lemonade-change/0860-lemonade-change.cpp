class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fi=0,ten=0,twe=0;
        for(auto i:bills){
            if(i==5){
                fi++;
            }
            else if(i==10 && fi>0){
                ten++;
                fi--;
            }
            else{
                if(ten>=1 && fi>0){
                    twe++;
                    ten--;
                    fi--;
                }
                else if(fi>=3){
                    twe++;
                    fi-=3;
                }
                else{
                    return false;
                }
            }
            
        }
        return true;
    }
};