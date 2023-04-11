#include <iostream>
using namespace std;

int main() {
    char arr[] = { 'R', 'G', 'B', 'G', 'B', 'G'};
    //R + G = B, B + G = R, B + G = R => B + R = G, R => B

    int count[256] = {0};

    for (auto c : arr) {
        int temp = ++count[arr[c]];
    }    
    
    
    


    return 0;
}