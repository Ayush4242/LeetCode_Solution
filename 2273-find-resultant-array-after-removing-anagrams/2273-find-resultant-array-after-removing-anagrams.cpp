class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>res;
        for(auto i:words){
            if(res.empty()){
                res.push_back(i);
            }
            else{
                string a=res.back();
                string b=i;
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                if(a!=b){
                    res.push_back(i);
                }
            }
        }
        return res;
    }
};