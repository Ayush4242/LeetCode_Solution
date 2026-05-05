class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        deque<int>dq(arr.begin(),arr.end());
        int winco=0;
        int winner=dq.front();
        dq.pop_front();
        int maxi=*max_element(arr.begin(), arr.end());
        while(winco<k && winner!=maxi){
            int opp=dq.front();
            dq.pop_front();
            if(winner>opp){
                winco++;
                dq.push_back(opp);
            }
            else{
                winco=1;
                dq.push_back(winner);
                winner=opp;
                
            }
        }
        return winner;


    }
};