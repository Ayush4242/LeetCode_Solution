class Solution {
public:
    static bool comp(string &a,string &b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>arr;
        for(auto i:nums){
            arr.push_back(to_string(i));
        }
        
        sort(arr.begin(),arr.end(),comp);
        if(arr[0]=="0"){
            return "0";
        }
        string ans="";
        
        for(auto i:arr){
            ans+=i;
        }
        return ans;
    }
};