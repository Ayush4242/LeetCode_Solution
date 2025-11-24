class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int val=0;
        vector<bool>vec;
        for(auto i:nums){
            val=(val*2+i)%5;
            if(val==0){
                vec.push_back(true);
            }
            else{
                vec.push_back(false);
            }
        }
        return vec;

    }
};