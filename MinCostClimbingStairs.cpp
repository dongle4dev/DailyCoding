#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << (#x) << " is " << (x) << endl
#define endl "\n"

int minCostClimbingStairs(vector<int> &cost){
  int n = cost.size();
  vector<int> memo(n + 1, 0);

  memo[0] = cost[0], memo[1] = cost[1];

  for (int i = 2; i <= n; ++i)
  {
    memo[i] = min(memo[i - 2], memo[i - 1]) + (i == n ? 0 : cost[i]);
  }

  return memo[n];
}

int main(int argc, char *argv[]){
  ios_base::sync_with_stdio(0); // insert
  cin.tie(0);                   // insert

  vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};

  int ans = minCostClimbingStairs(cost);
  debug(ans);

  return 0;
}
