#include <iostream>
using namespace std;

// Function to remove duplicates from an array
int removeDuplicates(int arr[], int size) {
    int newSize = size;

    for (int i = 0; i < newSize - 1; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--;
                j--; 
            }
        }
    }

    return newSize; // Return new size of the array
}

int main() {
    int size = 7;
    int arr[] = {1, 2, 2, 3, 4, 4, 5};

    size = removeDuplicates(arr, size);

    // Output the array with duplicates removed
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
