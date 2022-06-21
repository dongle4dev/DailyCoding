#include <iostream>
#include <vector>
using namespace std;

//     bool helper(string s, string t) {
//         map<char,char> mp;
        
//         for (int i = 0; i < s.length(); ++i) {
//             if (mp.find(s[i]) != mp.end()) {
//                 if (mp[s[i]] != t[i]) return false;
//             }
//             else mp[s[i]] = t[i];
//         }
        
//         return true;
        
//     }
//     bool isIsomorphic(string s, string t) {
//         return helper(s,t) && helper(t,s);
//     }
bool isIsomorphic(string s, string t) {
    int len = s.length();
    char isChecked[128] = { };
        
    for (int i = 0; i < len; ++i) {
        int temp = s[i];
        if (!isChecked[temp]) {
            for (auto j : isChecked) 
                if (j == t[i]) return false;
            isChecked[temp] = t[i];
        }
        else if (isChecked[temp] != t[i]) return false;
    }
        
    return true;
}
// Example 1:
// Input: s = "egg", t = "add"
// Output: true

// Example 2:
// Input: s = "foo", t = "bar"

// Output: false
// Example 3:
// Input: s = "paper", t = "title"
// Output: true
int main() {
    string s = "badc", t = "baba";
    cout << isIsomorphic(s,t) << endl;

    return 0;
}