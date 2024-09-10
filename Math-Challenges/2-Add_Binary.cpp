#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b) {
    string result;
    int carry = 0;
    int i = a.length() - 1, j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        carry += (i >= 0) ? a[i--] - '0' : 0;
        carry += (j >= 0) ? b[j--] - '0' : 0;
        result.insert(result.begin(), carry % 2 + '0');
        carry /= 2;
    }

    return result;
}

int main() {
    string a = "1010";
    string b = "1011";
    string sum = addBinary(a, b);
    cout << "Sum: " << sum << endl;
    return 0;
}
