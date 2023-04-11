#include <iostream>
using namespace std;

void swapBits(int arr[], int n) {
    for(int i=0; i< n; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
// def swap_bits(x):
//     EVEN = 0b10101010
//     ODD = 0b01010101
//     return (x & EVEN) >> 1 | (x & ODD) << 1
int main() {
    int EVEN = 0b10101010;
    int ODD = 0b01010101;
    EVEN >>= 1;

    cout << EVEN;
    return 0;
}