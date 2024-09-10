#include <iostream>

using namespace std;

int kthFactor(int n, int k) {
    int count = 0;

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            count++;
            if (count == k) return i;
        }
    }

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0 && i != n / i) {
            if (++count == k) return n / i;
        }
    }

    return -1;
}

int main() {
    int n = 12, k = 3;
    cout << kthFactor(n, k) << endl;
    return 0;
}
