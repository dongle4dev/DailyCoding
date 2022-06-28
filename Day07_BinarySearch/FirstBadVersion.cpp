#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int begin = 1, end = n;
        int indexTrue = 0;
        
        while (begin < end) {
            int pivot = begin + (end - begin)/2;
            
            if (!isBadVersion(pivot)) {
                begin = pivot + 1;
            }
            else {
                end = pivot - 1;
                indexTrue = pivot;
            }
        }
        if (isBadVersion(begin)) return begin;
        else return indexTrue;
    }
};