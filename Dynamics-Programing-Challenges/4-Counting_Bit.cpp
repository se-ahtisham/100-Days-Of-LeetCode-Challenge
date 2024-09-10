#include <iostream>

using namespace std;

void countBits(int n) {
    for (int x = 0; x <= n; ++x) {
        int num = x;
        int sum = 0;
        
        while (num != 0) {
            sum += num % 2;
            num /= 2;
        }
        
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    countBits(n);

    return 0;
}
