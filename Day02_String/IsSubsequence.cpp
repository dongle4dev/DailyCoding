#include <iostream>
#include <vector>
using namespace std;

//     bool isSubsequence(string s, string t) {
//         int len = s.length();
//         int preIndex = -1;
//         for (int i = 0; i < len; ++i) {
//             preIndex = t.find(s[i], preIndex + 1);
            
//             if (preIndex == -1) return false;
//         }
        
//         return true;
//     }
bool isSubsequence(string s, string t) {
    int i = s.size();
    int j = t.size();
    if (i == 0) return true;
    while(i >= 0 && j >= 0){
        if (s[i] == t[j])
            i--;
        j--;
    }
    if (i < 0) return true;
    return false;
}
// Example 1:
// Input: s = "abc", t = "ahbgdc"
// Output: true

// Example 2:
// Input: s = "axc", t = "ahbgdc"
// Output: false
int main() {
    string s = "abc", t = "ahbgdc";
    cout << isSubsequence(s,t) << endl;

    return 0;
}