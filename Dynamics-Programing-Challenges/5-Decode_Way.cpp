#include <iostream>
#include <string>

using namespace std;

int numDecodings(string& s) {
    int n = s.length();
    
    if (n == 0 || s[0] == '0') return 0;

    int prev1 = 1;  // Number of ways to decode the substring starting from index i+1
    int prev2 = 0;  // Number of ways to decode the substring starting from index i+2
    int current = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            current = 0;
        } else {
            current = prev1;
            if (i + 1 < n) {
                int twoDigitNumber = (s[i] - '0') * 10 + (s[i + 1] - '0');
                if (twoDigitNumber >= 10 && twoDigitNumber <= 26) {
                    current += prev2;
                }
            }
        }
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Number of decodings: " << numDecodings(s) << endl;

    return 0;
}
