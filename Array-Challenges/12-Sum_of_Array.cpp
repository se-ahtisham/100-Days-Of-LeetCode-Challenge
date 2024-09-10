#include <iostream>
using namespace std;

void updateArray(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        arr[i] += arr[i - 1];
    }
}

int main() {
    const int SIZE = 4;
    int arr[SIZE] = {1, 1, 1, 1};

    updateArray(arr, SIZE);

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
