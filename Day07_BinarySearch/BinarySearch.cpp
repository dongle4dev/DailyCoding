#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0, end = nums.size() - 1;
        
        while (begin <= end) {
            int pivot = begin + (end - begin)/2;
            
            if (nums[pivot] == target) return pivot;
            if (nums[pivot] < target) {
                begin = pivot + 1;
            }
            else {
                end = pivot - 1;
            }
        }
        
        return -1;
    }
};