#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min = prices[0], profit = 0;
        
        for (int i = 1; i < prices.size(); ++i) {
            if (min > prices[i]) {
                min = prices[i];
            }
            else {
                int temp = prices[i] - min;
                if (temp > profit) profit = temp;
            }
        }
        
        return profit;
    }
};