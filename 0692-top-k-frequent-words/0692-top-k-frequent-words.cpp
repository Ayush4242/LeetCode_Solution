class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto i:words){
            mp[i]++;
        }

        auto cmp = [](pair<int,string> &a, pair<int,string> &b){
            if(a.first == b.first){
                return a.second > b.second; // ONLY FIX
            }
            return a.first < b.first;
        };

        priority_queue<pair<int,string>, vector<pair<int,string>>, decltype(cmp)> pq(cmp);

        for(auto i:mp){
            pq.push({i.second,i.first});
        }

        vector<pair<int,string>> res;
        while(k>0){
            res.push_back({pq.top().first,pq.top().second});
            pq.pop();
            k--;
        }

        sort(res.begin(),res.end(),[](pair<int,string> &a, pair<int,string> &b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            else{
                return a.first>b.first;
            }
        });

        vector<string> lst;
        for(auto i:res){
            lst.push_back(i.second);
        }
        return lst;
    }
};