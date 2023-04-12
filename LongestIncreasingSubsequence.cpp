#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << (#x) << " is " << (x) << endl
#define endl "\n"

//recursion
int lis(int prev, int cur, vector<int>& nums) {
		if (cur == nums.size()) return 0;

		int isSelected = 0, isNotSelected;
		if (prev == -1 || nums[prev] < nums[cur]) {
				isSelected = 1 + lis(cur, cur + 1, nums);
		}
		isNotSelected = lis(prev, cur + 1, nums);

		return max(isSelected, isNotSelected);
}
//memorization
int lis(int prev, int cur, vector<vector<int>>& memo, vector<int>& nums) {
	if (cur == nums.size()) return 0;
	if (prev != -1 && memo[prev][cur] != -1) return memo[prev][cur];

	int isSelected = 0, isNotSelected;
	if (prev == -1 || nums[prev] < nums[cur]) {
			isSelected = 1 + lis(cur, cur + 1, memo, nums);
	}
	isNotSelected = lis(prev, cur + 1, memo, nums);

	if (prev != -1) return memo[prev][cur] = max(isSelected, isNotSelected);
	return max(isSelected, isNotSelected);
}

 int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        int ans = 1;

        for (int i = 1; i < n; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (nums[j] < nums[i] && dp[j] > dp[i]) {
                    dp[i] = dp[j];
                }
            }
            dp[i]++;
            ans = max(ans,dp[i]);
        }

        return ans;
    }



int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(0); // insert
  cin.tie(0);                   // insert

  vector<int> nums = {10,9,2,5,3,7,101,18};

  cout << lengthOfLIS(nums);

  return 0;
}