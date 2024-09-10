#include <iostream>
#include <algorithm>
using namespace std;

void moveZeros(int arr[], int size) {
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[index]);
            index++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZeros(arr, size);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
