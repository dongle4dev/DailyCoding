class Compare {
public:
    bool operator()(const pair<int, string> &a, const pair<int,string> &b) const {
        if (a.first != b.first) return a.first > b.first;
        else return a.second < b.second;
    }    
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> hashmap;
        
        for (auto &each : words) 
            hashmap[each]++;
        
        priority_queue<pair<int,string>, vector<pair<int,string>>, Compare> pq;
        
        for (auto &each : hashmap) {
            pq.push(make_pair(each.second, each.first));
            if (pq.size() > k) pq.pop();
        }
        
        vector<string> result;
        
        while (!pq.empty()) {
            result.insert(result.begin(), pq.top().second);
            pq.pop();
        }
        
        return result;
    }
};
