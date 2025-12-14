class Solution {
public:
bool isvalid(string code){
    if(code.empty()){
        return false;
    }
    for(auto ch:code){
    if(!isalnum(ch) && ch!='_'){
        return false;
    }
    }
    return true;
}
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string,int>mp{
            {"electronics",0},{"grocery",1},{"pharmacy",2},{"restaurant",3}
        };
        vector<pair<int,string>>temp;
        for(int i=0;i<code.size();i++){
            if(isActive[i]==true && mp.count(businessLine[i]) && isvalid(code[i])){
                temp.push_back({mp[businessLine[i]],code[i]});
            }
        }
        sort(temp.begin(),temp.end());
        vector<string>vec;
        for(auto i:temp){
            vec.push_back(i.second);
        }
        return vec;
    }
};