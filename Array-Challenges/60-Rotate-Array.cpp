#include <iostream>

using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n

    // Reverse the entire array
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Reverse the first k elements
    start = 0;
    end = k - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Reverse the remaining n - k elements
    start = k;
    end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of positions to rotate

    cout << "Original array: ";
    printArray(arr, n);

    rotateArray(arr, n, k);

    cout << "Rotated array: ";
    printArray(arr, n);

    return 0;
}
