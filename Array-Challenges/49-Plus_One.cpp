#include <iostream>

void plusOne(int digits[], int& n) {
    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {
        if (carry == 0) break;
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        int newSize = n + 1;
        int newDigits[newSize];
        newDigits[0] = carry;
        for (int i = 1; i < newSize; i++) {
            newDigits[i] = digits[i - 1];
        }
        for (int i = 0; i < newSize; i++) {
            digits[i] = newDigits[i];
        }
        n = newSize;
    }
}

int main() {
    int digits[4] = {9, 9, 9};
    int n = 3;

    plusOne(digits, n);

    for (int i = 0; i < n; i++) {
        std::cout << digits[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
