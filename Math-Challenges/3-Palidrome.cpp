#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int reverse = 0;
    int temp = n;
    while (temp != 0) {
        int lastDigit = temp % 10;
        reverse = (reverse * 10) + lastDigit;
        temp = temp / 10;
    }
    return (reverse == n);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (checkPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}
