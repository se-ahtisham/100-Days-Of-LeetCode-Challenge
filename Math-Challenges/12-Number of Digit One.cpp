#include <iostream>

using namespace std;

int countDigitOne(int n) {
    int count = 0;
    long long factor = 1;

    while (factor <= n) {
        int lowerNumbers = n - (n / factor) * factor;
        int currentDigit = (n / factor) % 10;
        int higherNumbers = n / (factor * 10);

        if (currentDigit == 0) {
            count += higherNumbers * factor;
        } else if (currentDigit == 1) {
            count += higherNumbers * factor + lowerNumbers + 1;
        } else {
            count += (higherNumbers + 1) * factor;
        }

        factor *= 10;
    }

    return count;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = countDigitOne(n);
    cout << "The number of times digit 1 appears from 1 to " << n << " is: " << result << endl;

    return 0;
}
