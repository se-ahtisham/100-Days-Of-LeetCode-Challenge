#include <iostream>
#include <algorithm>

using namespace std;

void nextPermutation(int nums[], int n) {
    if (n <= 1) return;

    int k = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (nums[i] < nums[i + 1]) {
            k = i;
        }
    }

    if (k == -1) {
        reverse(nums, nums + n);
        return;
    }

    int l = -1;
    for (int i = k + 1; i < n; ++i) {
        if (nums[i] > nums[k]) {
            l = i;
        }
    }

    swap(nums[k], nums[l]);
    reverse(nums + k + 1, nums + n);
}

int main() {
    int nums[] = {1, 2, 3}; // Fixed array for testing
    int n = sizeof(nums) / sizeof(nums[0]);

    nextPermutation(nums, n);

    cout << "Next permutation: ";
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
