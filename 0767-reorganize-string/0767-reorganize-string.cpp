class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string res="";
        while(pq.size()>=2){
            auto first=pq.top();
            pq.pop();
            auto second=pq.top();
            pq.pop();
            res+=first.second;
            res+=second.second;
            first.first--;
            second.first--;
            if(first.first>0){
                pq.push(first);
                
            }
            if(second.first>0){
                pq.push(second);
                
            }

        }
        if(!pq.empty()){
            if(pq.top().first>1){
                return "";
            }
            res+=pq.top().second;
        }
        return res;

    }
};