#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << (#x) << " is " << (x) << endl
#define FTB(i, a, b) for (ll i = a, _b = b; i <= _b; i++)
#define FT(i, a, b) for (ll i = a, _b = b; i < _b; i++)
#define FGB(i, a, b) for (ll i = a, _b = b; i >= _b; i--)
#define FG(i, a, b) for (ll i = a, _b = b; i > _b; i--)
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    vector<int> memo;

    for (int i = 0; i < strs.size(); ++i) {
        int total = 0;
        for (int j = 0; j < strs[i].length(); ++j) {
            total += strs[i][j] - '0';
        }
        
        int index = -1;
        for (int j = 0; j < memo.size(); ++j) {
          if (memo[j] == total) index = j;
        }

        if (index == -1) {
          vector<string> temp;
          temp.push_back(strs[i]);
          ans.push_back(temp);
          memo.push_back(total);
        }
        else {
          ans[index].push_back(strs[i]);
        }
    }

    return ans;
}

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(0); // insert
  cin.tie(0);                   // insert

  vector<string> strs{"eat","tea","tan","ate","nat","bat"};
  vector<vector<string>> ans;

  ans = groupAnagrams(strs);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << endl;
  }

  return 0;
}