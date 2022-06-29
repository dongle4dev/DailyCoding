class Solution {
    int mem[31] = {0};
public:
    int fib(int n) {
        if (n < 2) {
            mem[n] = n;
            return mem[n];
        } 
        
        if (mem[n] != 0) return mem[n];
        
        mem[n] = fib(n-1) + fib(n-2);
        
        return mem[n];
    }
};
