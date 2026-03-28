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
        int start=0,curr=0;
        for(int i=0;i<gas.size();i++){
            curr=curr+gas[i]-cost[i];
            if(curr<0){
                start=i+1;
                curr=0;
            }
        }
        return start;
           
    }
};