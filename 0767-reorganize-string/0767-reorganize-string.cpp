class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string res="";
        while(pq.size()>1){
            auto a=pq.top();
            pq.pop();
            auto b=pq.top();
            pq.pop();
            a.first--;
            res+=a.second;            
            if(a.first>0){
                pq.push(a);
            }            
            b.first--;
            res+=b.second;
            if(b.first>0){
                pq.push(b);
            }       
        }
        if(!pq.empty()){
            if(pq.top().first>1){
                return "";
            }
            else{
                res+=pq.top().second;
            }
        }
        return res;
    }
};