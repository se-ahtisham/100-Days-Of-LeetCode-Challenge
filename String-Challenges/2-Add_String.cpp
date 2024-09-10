#include <iostream>
#include <string>
using namespace std;

string addStrings(string num1, string num2) {
    long long int n1 = stoll(num1);
    long long int n2 = stoll(num2);
    long long int sum = n1 + n2;
    return to_string(sum);
}

int main() {
    string num1 = "456";
    string num2 = "77";
    cout << addStrings(num1, num2) << endl;
    return 0;
}
