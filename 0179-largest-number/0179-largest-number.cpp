class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        for(auto i:nums){
            ans.push_back(to_string(i));            
        }
        sort(ans.begin(),ans.end(),[](string &a,string &b){
            return a+b>b+a;
        });
        if(ans[0]=="0"){
            return "0";
        }
        string res="";
        for(auto i:ans){
            res+=i;
        }
        return res;
    }
};