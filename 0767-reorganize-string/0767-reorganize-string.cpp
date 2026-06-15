class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string str="";
        while(pq.size()>=2){
            auto fir=pq.top();
            pq.pop();
            auto sec=pq.top();
            pq.pop();
            fir.first--;
            sec.first--;
            str+=fir.second;
            str+=sec.second;
            if(fir.first>0){
                pq.push({fir.first,fir.second});
            }
            if(sec.first>0){
                pq.push({sec.first,sec.second});
            }
            
            
        }
        if(pq.size()>0){
            if(pq.size()==1 && pq.top().first==1){
                str+=pq.top().second;
            }
            else{
                return "";
            }

            
        }
        return str;
    }
};