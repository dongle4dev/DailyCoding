#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    //vector<int> result;
    //int temp = nums[0];
    for (auto i = 1; i < nums.size(); ++i) {
        // temp += nums[i];
        // result.push_back(temp);
        nums[i] += nums[i - 1];
    }
    return nums;
}
// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
int main() {
    vector<int> nums = {1,2,3,4}; //nums {1,2,3,4}
    //nums(5,12) 5 is size, 12 is value of all numbers of vector

    nums = runningSum(nums);

    //print vector: for_each, iterator
    for (auto i : nums)
        cout << i << " ";

    return 0;
}