#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, b;
    double p;
    
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> b >> p;
        double bpm = (60 * b * 1.0) / p;
        cout << setprecision(4) << fixed;
        cout << bpm - bpm/b << " " << bpm << " " << bpm + bpm/b << endl;
    }
    
    
    return 0;
}
