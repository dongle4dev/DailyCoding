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

void rotate(vector<vector<int>> &matrix)
{
  // 00 01 02 -> 02 12 22
  // 02 12 22 -> 22 21 20
  // 20 21 22 -> 00 10 20
  // 00 10 20 -> 00 01 02
  int n = matrix.size();
  int top = 0, bottom = n - 1, left = 0, right = n - 1;
  int *temp = new int[n];
  while (--n > 1)
  {
    for (int i = top; i <= n; ++i) {
        temp[i] = matrix[right][i];
        matrix[right][i] = matrix[top][i];
    }
    for (int i = left; i <= n; ++i) {
        int x = matrix[bottom][n - i];
        cout << x;
        matrix[bottom][n - i] = temp[i];
        temp[i] = x;
    }
    for (int i = left; i <= n; ++i) {
        int x = matrix[i][left];
        
        matrix[i][left] = temp[n - i];
        temp[n - i] = x;
    }
    for (int i = top; i <= n; ++i) {
        
        matrix[top][i] = temp[i];
    }

    ++top, --bottom, ++left, --right;
  }
  delete[] temp;
}

int main(int argc, char *argv[])
{
  ios_base::sync_with_stdio(0); // insert
  cin.tie(0);                   // insert

  vector<vector<int>> vect{
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  rotate(vect);

  return 0;
}