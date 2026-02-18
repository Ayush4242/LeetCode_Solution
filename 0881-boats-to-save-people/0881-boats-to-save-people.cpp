class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1,c=0;
        while(j>=i){
            if(people[j]+people[i]<=limit){
                c++;
                j--;
                i++;
            }
            else if(people[j]<=limit){
                j--;
                c++;
            }
            else{
                i++;
                c++;
            }
        }
        return c;
    }
};