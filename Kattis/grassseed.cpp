#include <iostream>
#include <iomanip>
using namespace srd;

int main() {
    double c, w, l, square = 0;
    int lawns;
    
    cin >> c;
    cin >> lawns;
    
    for (int i = 0; i < lawns; ++i) {
        cin >> w >> l;
        
        square += w * l;
    }    
    
    cout << setprecision(6) << fixed << square * c;
    
    
    return 0;
}