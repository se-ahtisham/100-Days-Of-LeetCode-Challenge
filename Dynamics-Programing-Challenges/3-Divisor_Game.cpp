#include <iostream>

using namespace std;

bool divisorGame(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (divisorGame(n)) {
        cout << "Alice wins." << endl;
    } else {
        cout << "Bob wins." << endl;
    }

    return 0;
}
