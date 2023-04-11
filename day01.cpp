#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << (#x) << " is " << (x) << endl
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

string countAndSay(int n) {
    if (n == 1) return "1";
    string res = countAndSay(n - 1);
   
    string cur = "";

    for (int i = 0; i < res.size(); ++i) {
        int count = 1;
        
        while ((i + 1 < res.size()) && (res[i] == res[i + 1])) {
            count++;
            i++;
        }

        cur += to_string(count) + res[i];
    }
    
    res = cur;
    
    return res;
}

int main(int argc, char * argv []) {
    ios_base::sync_with_stdio(0); // insert
    cin.tie(0); // insert
    
    cout << countAndSay(stoi(argv[1])) + endl;

    return 0;
}