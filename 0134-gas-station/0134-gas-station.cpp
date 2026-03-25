class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totcost=0,totgas=0;
        for(auto i:gas){
            totgas+=i;
        }
        for(auto i:cost){
            totcost+=i;
        }
        if(totcost>totgas){
            return -1;
        }
        int start=0,currgas=0;
        for(int i=0;i<gas.size();i++){
            currgas=currgas+gas[i]-cost[i];
            if(currgas<0){
                start=i+1;
                currgas=0;
            }
        }
        return start;
    }
};