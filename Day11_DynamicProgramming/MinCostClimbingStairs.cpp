class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
//         int* mem = new int[n];
        
//         if (n < 2) return 0;
//         mem[0] = cost[0];
//         mem[1] = cost[1];
        
//         for (int i = 2; i < n; ++i) {
//             mem[i] = min(mem[i-2], mem[i-1]) + cost[i];
//         }
        
//         return min(mem[n-1], mem[n-2]);
        for (int i = 2; i < n; ++i) {
            cost[i] = min(cost[i-2], cost[i-1]) + cost[i];
        }
        
        return min(cost[n-2], cost[n-1]);
    }
};
