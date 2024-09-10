#include <iostream>
using namespace std;

void printPascalsTriangle(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            cout << " ";
        }
        int number = 1;
        for (int k = 0; k <= i; k++) {
            cout << number << " ";
            number = number * (i - k) / (k + 1);
        }
        cout << endl;
    }
}

int main() {
    int size;

    cout << "Enter number of rows: ";
    cin >> size;

    printPascalsTriangle(size);

    return 0;
}
