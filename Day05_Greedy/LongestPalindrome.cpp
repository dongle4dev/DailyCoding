#include <iostream>
#include <string>

class Solution {
public:
    int longestPalindrome(std::string s) {
        int record[128] = {0}, result = 0;
        
        for (auto i : s) {
            record[i]++;
        }
        
        for (auto i : record) {
            result += ((i / 2) * 2);
            if (result % 2 == 0 && i % 2 == 1)
                result++;
        }

        return result;
    }
};