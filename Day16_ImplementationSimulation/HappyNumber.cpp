    int solve(int n) {
        int res = 0;
        while (n > 0) {
            res += pow(n % 10, 2);
            n /= 10;
        }
        
        return res;
    }
    bool isHappy(int n) {
//         int temp = n;
//         do {
//             int replaceNum = 0;
//             while (temp != 0) {
//                 replaceNum += pow(temp % 10, 2);
//                 temp /= 10;
//             }
            
//             temp = replaceNum;
//             if (temp == 89) return false;
//         }
//         while (temp != 1);
            
//         return true;
        int fast = n, slow = n;
        
        do {
            slow = solve(slow);
            fast = solve(solve(fast));
            
            if (fast == 1) return true;
        }
        while (fast != slow);
        
        return false;
    }
