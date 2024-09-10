#include <iostream>
#include <string>
using namespace std;

string multiply(string num1, string num2) {
    long long int n1 = stoll(num1);
    long long int n2 = stoll(num2);
    long long int product = n1 * n2;
    return to_string(product);
}

int main() {
    string num1 = "123";
    string num2 = "456";
    cout << multiply(num1, num2) << endl;
    return 0;
}
