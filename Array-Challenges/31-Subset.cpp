#include <iostream>
#include <cmath>

using namespace std;

void generateSubsets(int nums[], int n, int index, int current[], int size) {
    if (index == n) {
        // Print the current subset
        for (int i = 0; i < size; ++i) {
            cout << current[i] << " ";
        }
        cout << endl;
        return;
    }

    // Exclude nums[index] from the subset
    generateSubsets(nums, n, index + 1, current, size);

    // Include nums[index] in the subset
    current[size] = nums[index];
    generateSubsets(nums, n, index + 1, current, size + 1);
}

int main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int current[n]; // Array to store the current subset

    generateSubsets(nums, n, 0, current, 0);

    return 0;
}
