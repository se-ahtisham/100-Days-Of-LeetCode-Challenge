#include <iostream>
using namespace std;

// Function to reverse a portion of the array
void reverse(int nums[], int start, int end) {
    while (start < end) {
        swap(nums[start++], nums[end--]);
    }
}

// Function to rotate the array
void rotateArray(int nums[], int size, int k) {
    k = k % size; // Ensure k is within the bounds of size
    
    // Reverse the entire array
    reverse(nums, 0, size - 1);
    // Reverse the first k elements
    reverse(nums, 0, k - 1);
    // Reverse the remaining elements
    reverse(nums, k, size - 1);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7}; // Example input array
    int size = sizeof(nums) / sizeof(nums[0]); // Determine the size of the array
    int k = 3; // Number of steps to rotate

    rotateArray(nums, size, k); // Call the function to rotate the array

    // Output the rotated array
    for (int i = 0; i < size; ++i) {
        cout << nums[i] << " "; // Print the elements of the rotated array
    }
    cout << endl;

    return 0;
}
