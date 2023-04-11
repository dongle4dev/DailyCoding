#include <iostream>
using namespace std;
#include <string>


string decoding(string ques) {
    string ans = "";
    for (int i = 0; i < ques.length() - 1; ++i) {
        int count = 1;
        for (int j = i + 1; j < ques.length(); ++j) {
            if (ques[i] == ques[j]) {
                ++count;
            }
            else break;
        }
        ans += to_string(count) + ques[i];
        i += count - 1;
    }

    return ans;
}
int main(){
    string question = "AAAABBBCCDAA";    //4A3B2C1D2A

    string ans = decoding(question);

    cout << ans << endl;

    return 0;
}