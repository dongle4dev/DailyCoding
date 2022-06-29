class Solution {
    int mem[46] = {0};
public:
    int climbStairs(int n) {
        if (n <= 3) {
            mem[n] = n;
            return n;
        }
        if (mem[n]) return mem[n];
        
        mem[n] = climbStairs(n-1) + climbStairs(n-2);
        
        return mem[n];
    }
};
