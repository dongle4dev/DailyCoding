class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
//         priority_queue<int> q(stones.begin(), stones.end());
        
//         while (q.size() > 1) {
//             int stone1 = q.top(); q.pop();
//             int stone2 = q.top(); q.pop();
            
//             if (stone1 > stone2) q.push(stone1 - stone2);
//         }
        
//         return q.size() ? q.top() : 0;
        make_heap(stones.begin(), stones.end());
        
        while (stones.size() > 1) {
            int stone1 = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            
            int stone2 = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            
            if (stone1 > stone2) {
                stones.push_back(stone1 - stone2);
                push_heap(stones.begin(), stones.end());
            }
        }
        
        return stones.size() ? stones.front() : 0;
    }
};
