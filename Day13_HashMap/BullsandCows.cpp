#include <iostream>
#include <vector>
#include <string>
using namespace std;

string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        vector<int> numberOfDiff1(10,0);
        vector<int> numberOfDiff2(10,0);
        
        for(int i = 0; i < secret.length(); ++i) {
            char c1 = guess[i], c2 = secret[i];
            if (c1 == c2) bulls++;
            else {
                numberOfDiff1[c1 - '0']++;
                numberOfDiff2[c2 - '0']++;            
	    }
        }
        
	for (int i = 0; i < 10; ++i) {
	    cows += min(numberOfDiff1[i], numberOfDiff2[i]);
        }
        
        return to_string(bulls) + "A" + to_string(cows) + "B";
}

int main(){
	string secret = "1807", guess = "7810";

	cout << getHint(secret, guess);


	return 0;
}
