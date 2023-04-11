#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cin >> str;
    
    string str2 = str.substr(1, str.length() - 2);
    str.erase(str.length() - 1, 1);
    
    str += str2 + "y";
    
    cout << str;
    
    
    return 0;
}
