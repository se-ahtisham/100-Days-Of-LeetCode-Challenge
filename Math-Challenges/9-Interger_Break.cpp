#include <iostream>

using namespace std;

int integerBreak(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;

    int product = 1;

    while (n > 4) {
        product *= 3;
        n -= 3;
    }

    product *= n;

    return product;
}

int main() {
    int n = 10;
    cout << "The maximum product for integer break of " << n << " is " << integerBreak(n) << endl;
    return 0;
}
