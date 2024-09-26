#include <iostream>
#include <algorithm> // For std::reverse

using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    reverse(arr, arr + n); // Reverse the entire array
    reverse(arr, arr + k); // Reverse the first k elements
    reverse(arr + k, arr + n); // Reverse the remaining elements
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Use cout without std:: prefix
    }
    cout << endl; // Use endl without std:: prefix
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
