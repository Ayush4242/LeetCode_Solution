class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(auto i:hand){
            mp[i]++;            
        }
        if(hand.size()%groupSize!=0){
            return false;
        }
        while(!mp.empty()){
            int first=mp.begin()->first;
            for(int j=0;j<groupSize;j++){
            if(mp[first+j]==0){
                return false;
            }
            else{
                mp[first+j]--;
                if(mp[first+j]<1){
                    mp.erase(first+j);
                }
            }
        }
        }
        return true;
        
    }
};