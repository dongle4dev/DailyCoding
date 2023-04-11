#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, base = 2, extra = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        extra += pow(2, i);
    	cout << extra << " ";
    }
    
    cout << endl << pow(base + extra, 2);
    
    return 0;
}
